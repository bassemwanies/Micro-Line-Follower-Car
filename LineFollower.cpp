int LeftSensor1 = A0;
int LeftSensor2 = 4;
int ForwardSensor1 = 5;
int ForwardSensor2 = 6;
int RightSensor1 = A1;
int RightSensor2 = 7;
int VeryLeftSensor =9;
int VeryRightSensor =10;
int LeftMotorF = 8;
int LeftMotorR =11;                                                                                                                                                                                                                                        
int RightMotorF = 13;
int RightMotorR = 12;
int ENB1 = 2;
int ENB2 = 3;
int spd = 175;
int spdl=175;
void setup() {
pinMode(LeftSensor1, INPUT);
pinMode(LeftSensor2, INPUT);
pinMode(RightSensor1, INPUT);
pinMode(RightSensor2, INPUT);
pinMode(ForwardSensor1, INPUT);
pinMode(ForwardSensor2, INPUT);
pinMode(RightMotorF, OUTPUT);
pinMode(RightMotorR, OUTPUT);
pinMode(LeftMotorF, OUTPUT);
pinMode(LeftMotorR, OUTPUT);
pinMode(ENB1, OUTPUT);
pinMode(ENB2, OUTPUT);
}

void loop() {
   sensors();
}
void sensors(){
  
  if ((digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0) && (digitalRead(RightSensor1)==1||digitalRead(RightSensor2)==1) && (digitalRead(LeftSensor1)==1||digitalRead(LeftSensor2)==1)) //forward
  {
    if ((digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0) && (digitalRead(RightSensor1)==1||digitalRead(RightSensor2)==1) && (digitalRead(LeftSensor1)==1||digitalRead(LeftSensor2)==1))
    {
       if ((digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0) && (digitalRead(RightSensor1)==1||digitalRead(RightSensor2)==1) && (digitalRead(LeftSensor1)==1||digitalRead(LeftSensor2)==1))
       {
     digitalWrite(RightMotorF,1);
     digitalWrite(RightMotorR,0);
     digitalWrite(LeftMotorR,0);
     digitalWrite(LeftMotorF,1);
     analogWrite(ENB1,spd);
     analogWrite(ENB2,spdl);
       }
    }
  }
//Reverse
  else if (    (digitalRead(VeryRightSensor)==1 && digitalRead(LeftSensor2)==0 && digitalRead(RightSensor2)==0 && digitalRead(ForwardSensor1)==0 && digitalRead(ForwardSensor2)==0 ) ||digitalRead(LeftSensor2)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (    (digitalRead(VeryRightSensor)==1 && digitalRead(LeftSensor2)==0 && digitalRead(RightSensor2)==0 && digitalRead(ForwardSensor1)==0 && digitalRead(ForwardSensor2)==0 )||digitalRead(LeftSensor2)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (    (digitalRead(VeryRightSensor)==1 && digitalRead(LeftSensor2)==0 && digitalRead(RightSensor2)==0 && digitalRead(ForwardSensor1)==0 && digitalRead(ForwardSensor2)==0 )||digitalRead(LeftSensor2)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
     digitalWrite(RightMotorF,0);
     digitalWrite(RightMotorR,1);
     digitalWrite(LeftMotorR,1);
     digitalWrite(LeftMotorF,0);
     analogWrite(ENB1,spd);
     analogWrite(ENB2,spdl);
  }
  }
  }
 
  else if (        (digitalRead(RightSensor1)==0 && digitalRead(RightSensor2)==0 )    ||  (   ( (digitalRead(RightSensor1)==0) || (digitalRead(RightSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(LeftSensor2)==1)    )   ) //turn Right
  {
    if (           (digitalRead(RightSensor1)==0 && digitalRead(RightSensor2)==0 )    ||  (   ( (digitalRead(RightSensor1)==0) || (digitalRead(RightSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(LeftSensor2)==1)   )   )
     {
       if (       (digitalRead(RightSensor1)==0 && digitalRead(RightSensor2)==0 )    ||  (   ( (digitalRead(RightSensor1)==0) || (digitalRead(RightSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(LeftSensor2)==1)    )   )
        {
     digitalWrite(RightMotorF,0);
     digitalWrite(RightMotorR,1);
     digitalWrite(LeftMotorR,0);
     digitalWrite(LeftMotorF,1);
     analogWrite(ENB1,spd);
     analogWrite(ENB2,spdl);
      }
    }
  }
  else if (        (digitalRead(LeftSensor1)==0 && digitalRead(LeftSensor2)==0 )    ||  (   ( (digitalRead(LeftSensor1)==0) || (digitalRead(LeftSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(RightSensor2)==1)    )   ) //turn LEFT
  {
    if (           (digitalRead(LeftSensor1)==0 && digitalRead(LeftSensor2)==0 )    ||  (   ( (digitalRead(LeftSensor1)==0) || (digitalRead(LeftSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(RightSensor2)==1)    )   )
     {
       if (    (digitalRead(LeftSensor1)==0 && digitalRead(LeftSensor2)==0 )    ||  (   ( (digitalRead(LeftSensor1)==0) || (digitalRead(LeftSensor2)==0)  ) &&  (digitalRead(ForwardSensor1)==0|| digitalRead(ForwardSensor2)==0)&& (digitalRead(RightSensor2)==1)    )   )
        {
         digitalWrite(RightMotorF,1);
         digitalWrite(RightMotorR,0);
         digitalWrite(LeftMotorR,1);
         digitalWrite(LeftMotorF,0);
        analogWrite(ENB1,spd);
        analogWrite(ENB2,spdl);
        }
     }
  }
  else if (    digitalRead(VeryLeftSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryRightSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (    digitalRead(VeryLeftSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryRightSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (   digitalRead(VeryLeftSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryRightSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
         digitalWrite(RightMotorF,1);
         digitalWrite(RightMotorR,0);
         digitalWrite(LeftMotorR,1);
         digitalWrite(LeftMotorF,0);
         analogWrite(ENB1,spd);
         analogWrite(ENB2,spdl);
  }
  }
  }
  else if (    digitalRead(VeryRightSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryLeftSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (     digitalRead(VeryRightSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryLeftSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
    if (      digitalRead(VeryRightSensor)==0 && digitalRead(LeftSensor2)==1 && digitalRead(VeryLeftSensor)==1 && digitalRead(RightSensor2)==1 && digitalRead(ForwardSensor1)==1 && digitalRead(ForwardSensor2)==1 )
  {
     digitalWrite(RightMotorF,0);
     digitalWrite(RightMotorR,1);
     digitalWrite(LeftMotorR,0);
     digitalWrite(LeftMotorF,1);
     analogWrite(ENB1,spd);
     analogWrite(ENB2,spdl);
  }
  }
  }
 else   //stop
  {
     digitalWrite(LeftMotorR, LOW);
     digitalWrite(RightMotorF, LOW);
     digitalWrite(LeftMotorR, LOW);
     digitalWrite(RightMotorF, LOW);
  }
}
