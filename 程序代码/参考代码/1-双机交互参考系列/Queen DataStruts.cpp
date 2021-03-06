
#define QUEUESIZE 100
class MessageToServer
{
private:
    bool voice_or_graph;                                                       //表示此消息是属于语音还是图像
    char* information;                                                         //表示当中要传输的数据内容
public:
    MessageToServer(bool vog):voice_or_graph(vog){
        this.information = null;
    }

    MessageToServer(bool vog, char* info):voice_or_graph(vog){
        this.information = new char[sizeof(info)];
        memcpy(this.information, info, sizeof(info));
    }

    ~MessageToServer(){
        delete this.information;
    }
}

class MessageQueue
{
private:
    MessageToServer *queue;
    int head_position;
    int tail_position;
    int surplus_number;
public:
    MessageQueue(){
        this.queue = new MessageToServer[QUEUESIZE];
        this.head_position = 0;
        this.tail_position = 0;
        this.surplus_number = QUEUESIZE;
    }

    ~MessageToServer(){
        delete this.queue;
    }

    bool IsEmpty(){
        if(this.surplus_number == QUEUESIZE){
            return true;
        }else{
            return false;
        }
    }

    bool IsFull(){
        if(this.surplus_number == 0){
            return true;
        }else{
            return false;
        }
    }

    bool PushMessage(MessageToServer msg){
        if(this.IsFull()){
            return false;
        }

        this.queue[this.tail_position] = msg;
        this.tail_position = (this.tail_position + 1) % QUEUESIZE;
        this.surplus_number--;

        return true;
    }

    MessageToServer* PopMessage(){
        if(this.IsEmpty()){
            return null;
        }

        MessageToServer *ret = &(this.queue[head_position]);
        this.head_position = (this.head_position + 1) % QUEUESIZE;
        this.surplus_number++;
        return ret;
    }
}