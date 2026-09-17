import Python.speech_recognition as sr
import serial
import time

# Connect to Arduino
arduino = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2)

recognizer = sr.Recognizer()

# ---------- SEND FUNCTION ----------
def send_word(word):
    word = word.strip().upper()   # Arduino expects A-Z
    if word:
        arduino.write((word + '\n').encode())
        print("Sent to Arduino:", word)


# ---------- MAIN LOOP ----------
while True:
    print("\nChoose input mode:")
    print("1. Voice")
    print("2. Text")
    print("3. Exit")

    choice = input("Enter choice: ")

    #  VOICE INPUT
    if choice == '1':
        with sr.Microphone() as source:
            print("Speak a word (e.g., hello):")
            recognizer.adjust_for_ambient_noise(source)
            audio = recognizer.listen(source)

        try:
            text = recognizer.recognize_google(audio)
            print("You said:", text)

            send_word(text)

        except sr.UnknownValueError:
            print("Could not understand audio")
        except Exception as e:
            print("Error:", e)

    #  TEXT INPUT
    elif choice == '2':
        text = input("Type a word: ")
        print("You typed:", text)

        send_word(text)

    # EXIT
    elif choice == '3':
        print("Exiting...")
        break

    else:
        print("Invalid choice")