#include <iostream>

typedef struct LinkNode{
	int data;
	struct LinkNode *next;
} LinkNode;


typedef struct {
	LinkNode *font, *rear;
} LinkQueue;

int main()
{
	LinkNode *p=new LinkNode[2]();
	p[0].data=2;
	p[0].next=NULL;
	std::cout << p[0].data <<p[1].data <<std::endl;
	return 0;
}
