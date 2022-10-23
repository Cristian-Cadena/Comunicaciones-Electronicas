unsigned long tInicio = 0;
int etapa=0;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

int led9 = 10; //SALIDA PAP
int led10 = 11; //SALIDA CRU

int lectura1= 12; //LECTURA 1
int lectura2= 13; //LECTURA 3

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  pinMode(lectura1, INPUT);
  pinMode(lectura2, INPUT);
}

void loop()
{
  unsigned long tMedido = millis() - tInicio;
    
  switch (etapa)
  {  
    case 0:    
    digitalWrite(led1,HIGH);
          
    if(digitalRead(lectura1) == HIGH)
    {
      etapa=1;        
    } else if(digitalRead(lectura2) == HIGH)
    {
      etapa=2;      
    }
    break;
    
    case 1:    
    if(tMedido <= 1000)
    {    
    digitalWrite(led1,HIGH);  
    digitalWrite(led9,HIGH);
    }  
  
    else if(tMedido <= 2000)
    {   
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    }
    else if(tMedido <= 3000)
    {    
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);    
    }
    else if(tMedido <= 4000)
    {    
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);    
    }
    else if(tMedido <= 5000)
    {    
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);    
    }
      else if(tMedido <= 6000)
    {    
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);    
    }
    else if(tMedido <= 7000)
    {    
    digitalWrite(led6,LOW);
    digitalWrite(led7,HIGH);    
    }
    else if(tMedido <= 8000)
    {    
    digitalWrite(led7,LOW);
    digitalWrite(led8,HIGH);    
    } 
    else
    {
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    tInicio = millis();
    etapa=0;
    }
    break;

    case 2:    
    if(tMedido <= 1000)
    {    
    digitalWrite(led1,HIGH);  
    digitalWrite(led10,HIGH);
    }  
  
    else if(tMedido <= 2000)
    {   
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    }
    else if(tMedido <= 3000)
    {    
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);    
    }
    else if(tMedido <= 4000)
    {    
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);    
    }
    else if(tMedido <= 5000)
    {    
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);    
    }
      else if(tMedido <= 6000)
    {    
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);    
    }
    else if(tMedido <= 7000)
    {    
    digitalWrite(led6,LOW);
    digitalWrite(led7,HIGH);    
    }
    else if(tMedido <= 8000)
    {    
    digitalWrite(led7,LOW);
    digitalWrite(led8,HIGH);    
    } 
    else
    {
    digitalWrite(led8,LOW);
    digitalWrite(led10,LOW);
    tInicio = millis();
    etapa=0;
    }
    break;
 } 
}