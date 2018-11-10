#include "mbed.h"
#include "CAN.h"
#include "CAN_lib.h"

//DigitalOut heartBeat(LED1);
//DigitalOut cantx(PD_0);
//DigitalOut canrx(PD_1);
//CAN_Interrupt_Handler can1(PD_0, PD_1, 100000);     // Pins for Nucleo-F072RB
//CAN_Interrupt_Handler can2(PA_11, PA_12, 100000);
//CAN canBus(PD_0, PD_1);   // for F429ZI
//CANMessage canMailBox;
Serial pc(SERIAL_TX, SERIAL_RX);
DigitalOut led3(LED3);
//InterruptIn sendButton(BUTTON1);
//CAN testCANbus(PA_11, PA_12);       // Pins for Nucleo-F072RB

int CANaddress = 1337;
void sendTestMessage(); 


int main() 
{
    led3 = 1;
    pc.baud(9600);
    pc.format(8, Serial::None, 1);
    pc.printf("Test\n\r");
    led3 = 0;
    while(1)
    {
       /*
       cantx = 0;
       led3 = 1;
       canrx = 1;
       for(int i = 0; i < 10000; i++);
       canrx = 0;
       for(int i = 0; i < 10000; i++);
       */
    }
    
}

/*
void canInterupptRoutine();

void setup()
{
    canBus.frequency(100000);
    canBus.attach(&canInterupptRoutine, CAN::RxIrq);
}

int main() 
{
    setup();    
    while(1) 
    {
        ;
    }
}

void canInterupptRoutine()
{
    canBus.read(canMailBox);
    if(canMailBox.data[0] == '1')
    {
        heartBeat = 1;
    }
    else
    {
        heartBeat = 0;
    }
}*/
