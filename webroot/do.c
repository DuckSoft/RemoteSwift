#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void keySend(char key) {
	keybd_event(key,0,0,0);
	keybd_event(key,0,KEYEVENTF_KEYUP,0);
}

inline void goaction(int action) {
	switch (action) {
		default: {
			// TODO: NO ACTION AVAILABLE 
			break;
		}
		case 1:	// action-p
			keySend('P');
			break;
		case 2:	// action-n
			keySend('N');
			break;
		case 3:	// page-p 
			keySend(VK_PRIOR);
			break;
		case 4:	// page-n
			keySend(VK_NEXT);
			break;
		case 5:	// start
			keySend(VK_F5);
			break;
		case 6:	// stop
			keySend(VK_ESCAPE);
			break;
		case 7:	// black
			keySend('B');
			break;
		case 8:	// white
			keySend('W');
			break;
	}
} 

int main() {
	char * data = getenv("QUERY_STRING");
	if (data != NULL) {
		int action = -1; 
		sscanf(data,"act=%d",&action);
		goaction(action);
		printf("OK");
		fflush(stdout);	
	}
	return 0;
} 
