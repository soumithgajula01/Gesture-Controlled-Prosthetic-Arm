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
