int led_one  = 02; // definindo a porta 

void setup()
{
  pinMode(led_one, OUTPUT);
  //Definindo a porta, variável ou o próprio LED como uma saída de informação.
  
}

void loop()
{
  digitalWrite(led_one, HIGH); //liga 
  delay(1000); 
  digitalWrite(led_one, LOW); //desliga 
  delay(1000); 
}