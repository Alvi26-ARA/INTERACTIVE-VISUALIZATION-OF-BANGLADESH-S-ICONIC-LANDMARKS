<div align="center">

# 🇧🇩 Interactive Visualization of Bangladesh's Iconic Landmarks

### A 2D Interactive Computer Graphics Project Built with C++ and OpenGL/GLUT

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![OpenGL](https://img.shields.io/badge/Graphics-OpenGL-5586A4?logo=opengl&logoColor=white)
![GLUT](https://img.shields.io/badge/Library-GLUT-orange)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?logo=windows&logoColor=white)
![Course](https://img.shields.io/badge/Course-CSC4118-success)

**American International University-Bangladesh (AIUB)**  
Faculty of Science and Technology · Department of Computer Science and Engineering

</div>

---

## 📌 About the Project

**Interactive Visualization of Bangladesh's Iconic Landmarks** is a 2D computer graphics project that presents several well-known landmarks of Bangladesh in animated and interactive environments.

The project was developed using **C++**, **OpenGL**, and **GLUT** to demonstrate fundamental computer graphics concepts such as geometric primitives, coordinate-based drawing, transformations, animation, event handling, user interaction, and audio integration.

The program combines landmark architecture with moving vehicles, boats, clouds, traffic signals, lighting, day/night environments, and background sound to create a more dynamic visualization.

---

## 🏛️ Landmarks Included

The project contains five main interactive scenes:

1. **Bangladesh Parliament (Jatiya Sangsad Bhaban)**
2. **Hatirjheel Bridge**
3. **Shaheed Minar**
4. **Baitul Mukarram National Mosque**
5. **National Martyrs' Memorial**

---

## ✨ Key Features

- 🇧🇩 Five iconic Bangladeshi landmark scenes
- 🚗 Animated cars and buses
- 🚤 Moving boats in the Hatirjheel scene
- 🚦 Interactive and automatic traffic signal systems
- ☁️ Moving clouds and animated sky elements
- ☀️ Sun and 🌙 moon-based environmental effects
- 🌳 Animated/swaying tree elements
- 💡 Controllable street lights in supported scenes
- 🌃 Day and night visual environments
- ⌨️ Keyboard-based scene navigation and controls
- 🖱️ Mouse interaction for sound, pause/resume, and signal behavior
- 🔊 Scene-specific background audio and sound effects
- 🎞️ Timer-based continuous animation using GLUT

---

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| **C++** | Main programming language |
| **OpenGL** | 2D rendering and graphical primitives |
| **GLUT / glut32** | Window creation, rendering loop, keyboard/mouse input, timers |
| **WinMM / PlaySound** | Background music and sound effects |
| **Code::Blocks + MinGW** | Development and build environment |
| **Windows GDI** | Windows graphics/system linking support |

---

## 🎮 Controls

### Global Navigation

| Key | Action |
|---|---|
| `I` | Open instruction page |
| `1` | Bangladesh Parliament |
| `2` or `F` | Hatirjheel Bridge |
| `3` | Shaheed Minar |
| `4` | Baitul Mukarram |
| `5` | National Martyrs' Memorial |
| `B` | Return to front page |
| `M` | Mute current background audio |

### 1️⃣ Bangladesh Parliament

| Key | Action |
|---|---|
| `R` | Red traffic light |
| `G` | Green traffic light |
| `H` | Increase vehicle speed |
| `L` | Decrease vehicle speed |
| `U` | Resume background audio |

### 2️⃣ Hatirjheel Bridge

| Key | Action |
|---|---|
| `R` | Red traffic light |
| `G` | Green traffic light |
| `U` | Resume background audio |

### 3️⃣ Shaheed Minar

| Control | Action |
|---|---|
| `↑` | Increase vehicle speed |
| `↓` | Decrease vehicle speed |
| `←` | Stop vehicles |
| `→` | Resume vehicle movement |
| `O` | Turn street lights on |
| `L` | Turn street lights off |
| `R` | Red traffic light |
| `Y` | Yellow traffic light |
| `G` | Green traffic light |
| `S` | Reset vehicles |
| Left Mouse Click | Mute scene audio |
| Right Mouse Click | Play scene audio |

### 4️⃣ Baitul Mukarram

| Control | Action |
|---|---|
| `↑` | Increase animation speed |
| `↓` | Decrease animation speed |
| Left Mouse Click | Pause / resume the scene |
| Right Mouse Click | Return traffic signal to automatic mode |
| `U` | Resume background audio |

### 5️⃣ National Martyrs' Memorial

| Control | Action |
|---|---|
| `↑` | Increase vehicle speed |
| `↓` | Decrease vehicle speed |
| `←` | Stop vehicles |
| `→` | Resume vehicle movement |
| `R` | Red traffic light |
| `Y` | Yellow traffic light |
| `G` | Green traffic light |
| `S` | Reset vehicles |
| Left Mouse Click | Mute scene audio |
| Right Mouse Click | Play scene audio |

---

## ⚙️ Requirements

This project is currently designed for **Windows**.

You will need:

- Code::Blocks with MinGW/GCC, or another compatible MinGW C++ environment
- OpenGL headers/libraries
- GLUT / `glut32`
- Windows multimedia library (`winmm`)
- Windows GDI library (`gdi32`)

The source includes `windows.h` and uses Windows `PlaySound`, so additional changes are required for Linux or macOS.

---

## 🚀 How to Run

### Option 1: Run with Code::Blocks

1. Clone or download this repository.
2. Open the Code::Blocks project file:

   ```text
   INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS.cbp
   ```

3. Make sure GLUT/OpenGL is correctly configured in your MinGW installation.
4. Confirm the project links these libraries:

   ```text
   glut32
   opengl32
   glu32
   winmm
   gdi32
   ```

5. Build and run the **Debug** or **Release** target.
6. Keep the required `.wav` audio files in the executable's working directory so the scene sounds can be loaded correctly.

### Option 2: Compile with MinGW g++

If GLUT is already installed and configured, you can compile from a MinGW terminal:

```bash
g++ main.cpp -o landmarks.exe -lglut32 -lopengl32 -lglu32 -lwinmm -lgdi32
```

Then place the required WAV files beside `landmarks.exe` and run:

```bash
landmarks.exe
```

---

## 📁 Project Structure

```text
INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS/
│
├── main.cpp
├── INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS.cbp
├── INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS.depend
├── INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS.layout
│
├── bin/
│   └── Debug/
│       ├── INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS.exe
│       ├── National Anthem.wav
│       ├── Vehicles Passing  Sound Effects.wav
│       ├── shahid_Minar.wav
│       ├── Ibn-Al-Noor(chosic.com).wav
│       └── Ananto_music.wav
│
└── obj/
    └── Debug/
        └── main.o
```

---

## 🧠 Computer Graphics Concepts Demonstrated

- 2D geometric primitives
- Coordinate systems
- Translation and rotation
- Basic transformation techniques
- Polygon and circle generation
- Object composition
- Timer-based animation
- Scene rendering
- Traffic simulation logic
- Keyboard event handling
- Special-key event handling
- Mouse event handling
- Audio integration
- Interactive visualization

---

## 👥 Project Team

| Student | ID | Main Scene / Contribution |
|---|---|---|
| **Ananta Saha Pranta** | `23-52436-2` | National Martyrs' Memorial |
| **Abdur Rahman Alvi** | `23-52442-2` | Shaheed Minar |
| **Fabiha Tahsin** | `24-56556-1` | Hatirjheel Bridge |
| **Mahim Hossain** | `24-56577-1` | Bangladesh Parliament |
| **Abdullah Siam** | `23-54131-3` | Baitul Mukarram |

---

## 🎓 Academic Information

| Item | Details |
|---|---|
| **University** | American International University-Bangladesh (AIUB) |
| **Faculty** | Faculty of Science and Technology (FST) |
| **Department** | Computer Science and Engineering |
| **Course** | Computer Graphics |
| **Course Code** | CSC4118 |
| **Section** | H |
| **Semester** | Summer 2025-26 |
| **Group** | 01 |
| **Supervisor** | Mahfujur Rahman |

---

## 🎯 Project Objective

The main objective of this project is to demonstrate how fundamental computer graphics techniques can be combined to create an animated and interactive representation of Bangladesh's architectural and cultural landmarks.

Through the project, the team gained practical experience with 2D rendering, object modeling, coordinate systems, transformations, animations, event-driven interaction, traffic behavior, and multimedia integration using OpenGL/GLUT.

---

## 📚 Educational Purpose

This repository was created as an academic **Computer Graphics** project for **CSC4118** at **American International University-Bangladesh**.

It is intended for learning, demonstration, and academic presentation purposes.

---

<div align="center">

### 🇧🇩 Celebrating Bangladesh through Computer Graphics

**Built with C++ · OpenGL · GLUT**

</div>
