#include 
#include
#define 
#define 
const char 
const char 
WiFiServer 
 char lineBuf[80];
    int charCount = 0;
     
    void setup() {
        // запас времени на открытие монитора порта — 5 секунд
        delay(5000);
        // инициализируем контакты для светодиодов
        pinMode(RELAY, OUTPUT);
        pinMode(, OUTPUT);
        // инициализируем монитор порта
        Serial.begin(115200);
        // подключаемся к Wi-Fi сети
        Serial.println();
        Serial.println();
        Serial.print("Connecting to ");  
        Serial.println(ssid);
        WiFi.begin(ssid, password);
        while(WiFi.status() != WL_CONNECTED) {
            delay(500);
            Serial.print(".");
        }
        Serial.println("");
        Serial.println("Wi-Fi connected");  
        Serial.println("IP-address: "); 
           
        Serial.println(WiFi.localIP());
        server.begin();
    }
