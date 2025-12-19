//https://www.hackerrank.com/challenges/messages-order/problem?isFullScreen=true
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
    private:
    string msg;
    int instance_index;
public: 
inline static int index;
    Message() {}
    
    Message  (string txt):msg (txt) {}
    const string& get_text() {
     return msg;   
    }
    const int& get_index(){
        return instance_index;
    }
    void set_index(int i){
       instance_index = i;
    }
    
    bool operator< (Message& other){
      bool answer =this->instance_index <
      other.get_index ();
      return answer;
       
    }
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
      Message msg (text);
     msg.set_index(Message ::index++);
      return msg;
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
