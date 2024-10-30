// Definir los pines de los sensores de línea
#define SENSOR_1_PIN  1  // Pin analógico para sensor 1
#define SENSOR_2_PIN  2  // Pin analógico para sensor 2
#define SENSOR_3_PIN  42  // Pin analógico para sensor 3
#define SENSOR_4_PIN  41  // Pin analógico para sensor 4
#define SENSOR_5_PIN  40  // Pin analógico para sensor 5

// Definir los umbrales para cada sensor
#define THRESHOLD  500  // Ajusta este valor según la sensibilidad de tu sensor

void setup() {
  Serial.begin(115200);  // Iniciar comunicación serial

  // Configurar los pines de los sensores como entrada
  pinMode(SENSOR_1_PIN, INPUT);
  pinMode(SENSOR_2_PIN, INPUT);
  pinMode(SENSOR_3_PIN, INPUT);
  pinMode(SENSOR_4_PIN, INPUT);
  pinMode(SENSOR_5_PIN, INPUT);
}

void loop() {
  // Leer valores analógicos de los sensores
  int sensor1Value = digitalRead(SENSOR_1_PIN);
  int sensor2Value = digitalRead(SENSOR_2_PIN);
  int sensor3Value = digitalRead(SENSOR_3_PIN);
  int sensor4Value = digitalRead(SENSOR_4_PIN);
  int sensor5Value = digitalRead(SENSOR_5_PIN);

  // Mostrar los valores leídos por los sensores
  Serial.print("Sensor 1: "); Serial.print(sensor1Value);
  Serial.print("  | Sensor 2: "); Serial.print(sensor2Value);
  Serial.print("  | Sensor 3: "); Serial.print(sensor3Value);
  Serial.print("  | Sensor 4: "); Serial.print(sensor4Value);
  Serial.print("  | Sensor 5: "); Serial.println(sensor5Value);

  // Comparar los valores con el umbral para detectar la línea
  if (sensor1Value > THRESHOLD) {
    Serial.println("Sensor 1 detecta la línea.");
  }
  if (sensor2Value > THRESHOLD) {
    Serial.println("Sensor 2 detecta la línea.");
  }
  if (sensor3Value > THRESHOLD) {
    Serial.println("Sensor 3 detecta la línea.");
  }
  if (sensor4Value > THRESHOLD) {
    Serial.println("Sensor 4 detecta la línea.");
  }
  if (sensor5Value > THRESHOLD) {
    Serial.println("Sensor 5 detecta la línea.");
  }

  delay(200);  // Pausa para evitar demasiado spam en la salida serial
}
