# 🦾 Gesture-Controlled Prosthetic Arm using EMG & Machine Learning

## 🌟 Overview

This project presents a **Bidirectional Assistive Communication System** designed to reduce the communication gap between sign-language users and people who do not understand sign language.

The system supports communication in **two directions**:

- 🖐️ **Phase 1 – Gesture-to-Speech:** Hand gestures are captured using wearable sensors and converted into text and speech.
- 🎙️ **Phase 2 – Speech-to-Gesture:** Spoken words are converted into text and then represented as American Sign Language (ASL) gestures using a servo-controlled prosthetic hand.

The overall objective is to provide a more natural and accessible communication interface by enabling information to flow between **hand gestures and spoken language**.

---

## 🔄 Bidirectional Communication

```text
                    🦾 BIDIRECTIONAL SYSTEM
                           │
             ┌─────────────┴─────────────┐
             │                           │
             ▼                           ▼
      🖐️ PHASE 1                 🎙️ PHASE 2
   Gesture-to-Speech            Speech-to-Gesture
             │                           │
             ▼                           ▼
     EMG + Flex + IMU          Speech Input
             │                           │
             ▼                           ▼
      Signal Processing         Speech Recognition
             │                           │
             ▼                           ▼
     Gesture Recognition              Text
             │                           │
             ▼                           ▼
          Text                  Letter Extraction
             │                           │
             ▼                           ▼
         🔊 Speech                 ASL Mapping
                                         │
                                         ▼
                                    Arduino R4
                                         │
                                         ▼
                                  Servo Motors
                                         │
                                         ▼
                                  🦾 Prosthetic Hand

```


## 🖐️ Phase 1 – Gesture-to-Speech

Phase 1 focuses on converting **hand gestures into text and speech** using a wearable sensor-based system.

The system uses **EMG, Flex, and IMU sensors** to capture information related to muscle activity, finger bending, and hand movement. The acquired signals are processed for gesture recognition, and the recognized gesture is converted into text and speech.

### ⚙️ Workflow

```text
🖐️ Hand Gesture
      ↓
📡 Signal Acquisition
      ↓
💪 EMG + Flex + IMU
      ↓
⚙️ Signal Processing
      ↓
🤖 Gesture Recognition
      ↓
📝 Text
      ↓
🔊 Speech
```

### 🔬 Phase 1 Development

The Gesture-to-Speech module is currently being developed as part of the bidirectional communication system.

The development includes:

- 💪 EMG signal acquisition
- 🖐️ Flex sensor data collection
- 🧭 IMU-based motion sensing
- 📊 Sensor data storage in CSV format
- ⚙️ Signal preprocessing
- 🤖 Machine learning-based gesture classification
- 📝 Conversion of recognized gestures into text
- 🔊 Text-to-Speech output

The objective is to recognize different hand gestures from the combined sensor signals and provide corresponding text and speech output.

---

## 🎙️ Phase 2 – Speech-to-Gesture

Phase 2 focuses on converting **spoken words into corresponding American Sign Language (ASL) gestures** using a servo-controlled prosthetic hand.

The system captures spoken input through a microphone and converts it into text using speech recognition. The recognized word is processed character by character, and each letter is mapped to a predefined ASL hand configuration. An **Arduino R4** controls multiple servo motors to generate the required finger movements.

### ⚙️ Workflow

```text
🎙️ Speech Input
      ↓
🗣️ Speech Recognition
      ↓
📝 Text Conversion
      ↓
🔤 Letter Extraction
      ↓
🤟 ASL Mapping
      ↓
🔌 Arduino R4
      ↓
⚙️ Servo Motor Control
      ↓
🦾 Prosthetic Hand
```

### 💡 Example

For the spoken word:

```text
FLY
```

The system processes the word as:

```text
F → L → Y
↓
🤟 F Gesture
↓
🤟 L Gesture
↓
🤟 Y Gesture
```

The gestures are generated sequentially by controlling the finger positions of the prosthetic hand.

### 🧩 Phase 2 Process

1. 🎙️ **Speech Input**  
   Spoken words are captured through a microphone.

2. 🗣️ **Speech Recognition**  
   The speech input is converted into text.

3. 🔤 **Letter Extraction**  
   The recognized word is separated into individual letters.

4. 🤟 **ASL Mapping**  
   Each letter is mapped to its predefined ASL hand configuration.

5. 🔌 **Arduino Control**  
   The required gesture commands are sent to the Arduino R4.

6. ⚙️ **Servo Actuation**  
   Multiple servo motors control the individual fingers.

7. 🦾 **Gesture Generation**  
   The prosthetic hand generates the corresponding ASL gestures sequentially.

---

## 🚀 Features

- 🖐️ Gesture-to-Speech communication
- 🎙️ Speech-to-Gesture communication
- 💪 EMG-based gesture sensing
- 🖐️ Flex sensor-based finger movement detection
- 🧭 IMU-based hand movement sensing
- 🤟 American Sign Language (ASL) gesture mapping
- 🦾 Servo-controlled prosthetic hand
- 🔌 Arduino R4-based motor control
- 📝 Speech and gesture conversion to text
- 🔊 Text-to-Speech output
- 🔄 Sequential generation of ASL gestures
- 📊 Sensor data collection and processing
- 🤖 Machine learning-based gesture recognition

---

## 🧠 Tech Stack

### 🖐️ Phase 1 – Gesture-to-Speech

- **Programming Language:** Python
- **Sensors:** EMG, Flex, IMU
- **Data Format:** CSV
- **Processing:** Signal Processing
- **Recognition:** Machine Learning
- **Output:** Text and Speech

### 🎙️ Phase 2 – Speech-to-Gesture

- **Programming Languages:** Python, C/C++
- **Speech Processing:** Speech Recognition
- **Gesture Representation:** American Sign Language (ASL)
- **Microcontroller:** Arduino R4
- **Actuation:** Servo Motors
- **Development Environment:** Arduino IDE

---

## 🔩 Hardware Components

### 🖐️ Phase 1

- 🧤 Wearable Glove
- 💪 EMG Sensors
- 🖐️ Flex Sensors
- 🧭 IMU Sensor
- 🔌 Microcontroller
- 💻 Computer

### 🎙️ Phase 2

- 🦾 Prosthetic Hand
- ⚙️ Multiple Servo Motors
- 🔌 Arduino R4
- 🔋 External 5V Power Supply
- 🎙️ Microphone
- 🔌 Connecting Wires

---

## 📁 Project Structure

```text
Gesture-Controlled-Prosthetic-Arm/
│
├── Arduino/
│   └── speech_to_gesture.ino
│
├── Python/
│   └── speech_recognition.py
│
├── images/
│   ├── Hardware setup.jpeg
│   ├── Prosthetic Arm.jpeg
│   ├── Representing F.jpeg
│   ├── Representing L.jpeg
│   └── Representing Y.jpeg
│
└── Video/
    └── Prosthetic Arm with speech input.mov
```

> 📌 The current repository contains the implementation and demonstration files for **Phase 2 – Speech-to-Gesture**. Phase 1 implementation files will be added as development progresses.

---

## 📊 Results

The **Speech-to-Gesture** system was evaluated using **40 words**. Out of these, **37 words were recognized correctly**, resulting in an overall accuracy of **93%**.

| Metric | Performance |
|---|---:|
| 🎯 Accuracy | 93% |
| ✅ Precision | 97% |
| 🔍 Recall | 93% |
| ⚖️ F1 Score | 96% |
| 🔤 Character Accuracy | 94% |

### 📈 Performance Summary

The results demonstrate that the developed Speech-to-Gesture module can recognize spoken words and generate the corresponding ASL gestures through sequential finger movements.


## 📸 Project Demonstration

The repository contains images demonstrating the hardware setup and ASL gesture generation.

### 🦾 Hardware Setup

The hardware setup shows the prosthetic hand, Arduino R4, servo motors, and associated connections.

### 🤟 ASL Gesture Generation

The current demonstration includes the following ASL gestures:

- **F Gesture**
- **L Gesture**
- **Y Gesture**

### 🖼️ F Gesture

The prosthetic hand generates the ASL hand configuration corresponding to the letter **F**.

### 🖼️ L Gesture

The prosthetic hand generates the ASL hand configuration corresponding to the letter **L**.

### 🖼️ Y Gesture

The prosthetic hand generates the ASL hand configuration corresponding to the letter **Y**.

### 🎥 Video Demonstration

A demonstration video is included showing the prosthetic hand generating ASL gestures based on speech input.

---

## 🎯 Applications

The proposed system can be used in several assistive and accessibility-oriented applications:

- 🧏 **Assistive Communication**
- 🦾 **Prosthetic and Rehabilitation Systems**
- 🤖 **Human-Robot Interaction**
- ♿ **Accessibility Technologies**
- 🎓 **Academic and Research Applications**
- 🤟 **Speech-to-Sign Communication**
- 🗣️ **Alternative Communication Interfaces**

---

## 🚀 Future Improvements

The following improvements are planned for future development:

- 🔤 Expand the ASL gesture vocabulary
- 💬 Support complete phrases and sentences
- 🗣️ Improve speech recognition in noisy environments
- ⚡ Reduce gesture generation time
- ⚙️ Improve the mechanical design of the prosthetic hand
- 🧠 Improve gesture recognition performance
- 🧪 Conduct extensive real-world testing
- 📊 Increase the size and diversity of the gesture dataset
- 🔄 Fully integrate and optimize both communication directions
- 🤖 Improve the overall responsiveness of the assistive communication system

---


## 👨‍💻 Author

**Soumith Gajula**

