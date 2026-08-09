#include<stdio.h>
#include<stdlib.h>
typedef enum{
DEV_STOP,
DEV_RUN,
DEV_ERR
}DeviceState;
typedef struct{
	int devId;
	float temp;
	DeviceState state;
	int alarmFlag;
}Device;
int main(void){
	Device d[3];
	Device *p=d;
	d[0].devId=1;
	d[0].temp=12.3f;
	d[0].state=DEV_STOP;
	d[0].alarmFlag=0;
	d[1].devId=2;
	d[1].temp=45.6f;
	d[1].state=DEV_RUN;
	d[1].alarmFlag=1;
	d[2].devId=3;
	d[2].temp=78.9f;
	d[2].state=DEV_ERR;
	d[2].alarmFlag=1;
	for(int i=0;i<3;i++){
		printf("Id=%d\ntemp=%.1f\n",p->devId,p->temp);
		if(p->state==DEV_STOP) printf("state=停止\n");
		else if(p->state==DEV_RUN) printf("state=运行\n");
		else printf("state=故障\n");
		printf("alarmFlag=%d\n",p->alarmFlag);
		p++;
	}
	return 0;
}