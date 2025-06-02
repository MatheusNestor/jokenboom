#define MSG_SIZE 256 

typedef enum { 
    MSG_REQUEST,    
    MSG_RESPONSE,   
    MSG_RESULT, 
    MSG_PLAY_AGAIN_REQUEST, 
    MSG_PLAY_AGAIN_RESPONSE,     
    MSG_ERROR,       
    MSG_END         
} MessageType; 


typedef struct { 
    int type;          
    int client_action;   
    int server_action;   
    int result; 
    int client_wins; 
    int server_wins;          
    char message[MSG_SIZE];   
} GameMessage;