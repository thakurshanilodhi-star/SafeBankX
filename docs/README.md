<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,12,18,24,30&height=170&section=header&text=SafeBankX&fontSize=72&fontColor=ffffff&animation=fadeIn" width="100%" alt="SafeBankX banner"/>

### Bank Account Management System

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=20&pause=1200&color=22D3EE&center=true&vCenter=true&width=700&lines=C%2B%2B+backend+banking+prototype;Security+thinking;Auditability;Fraud+rule+engine)](https://github.com/thakurshanilodhi-star/SafeBankX)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Status](https://img.shields.io/badge/Status-Prototype-f59e0b?style=for-the-badge)
![Platform](https://img.shields.io/badge/Windows%20%7C%20Linux-terminal-0ea5e9?style=for-the-badge)

[![Overview](https://img.shields.io/badge/Go%20to-Overview-0ea5e9?style=flat-square)](#overview)
[![Focus](https://img.shields.io/badge/Go%20to-Focus-ef4444?style=flat-square)](#focus)
[![Demo](https://img.shields.io/badge/Go%20to-Login%20Demo-22c55e?style=flat-square)](#login-demo)
[![Structure](https://img.shields.io/badge/Go%20to-Project%20Structure-f97316?style=flat-square)](#project-structure)
[![Build](https://img.shields.io/badge/Go%20to-Build%20and%20Run-a855f7?style=flat-square)](#build-and-run)

</div>

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=6,12,18&height=10&section=header" width="100%" alt=""/>

## Overview

SafeBankX is a C++ backend banking prototype.

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=12,18,24&height=10&section=header" width="100%" alt=""/>

## Focus

<div align="center">

![Correct C++ usage](https://img.shields.io/badge/Correct%20C++%20usage-0ea5e9?style=for-the-badge)
![Security thinking](https://img.shields.io/badge/Security%20thinking-ef4444?style=for-the-badge)
![Auditability](https://img.shields.io/badge/Auditability-f97316?style=for-the-badge)
![Fraud rule engine](https://img.shields.io/badge/Fraud%20rule%20engine-a855f7?style=for-the-badge)
![Clean modular architecture](https://img.shields.io/badge/Clean%20modular%20architecture-22c55e?style=for-the-badge)

</div>

- Correct C++ usage
- Security thinking
- Auditability
- Fraud rule engine
- Clean modular architecture

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=18,24,0&height=10&section=header" width="100%" alt=""/>

## Login Demo

`main.cpp` is the entry point. It shows a colored terminal login screen and uses `AuthManager` from `include/security.h`.

<div align="center">

![Enter Username](https://img.shields.io/badge/Enter%20Username-0ea5e9?style=for-the-badge)
&rarr;
![Enter Password](https://img.shields.io/badge/Enter%20Password-6366f1?style=for-the-badge)
&rarr;
![Verifying credentials](https://img.shields.io/badge/Verifying%20credentials-f59e0b?style=for-the-badge)
&rarr;
![Success or Failed](https://img.shields.io/badge/Success%20or%20Failed-22c55e?style=for-the-badge)
&rarr;
![Logout](https://img.shields.io/badge/Logout-ef4444?style=for-the-badge)

</div>

<br>

1. Shows the SafeBankX header with the developer credits.
2. Asks for a username and a password.
3. Prints "Verifying credentials..." and waits one second.
4. Calls `auth.login(username, password)` and prints either `Status : SUCCESS` with the user name, or `Status : FAILED` with "Invalid Credentials".
5. Prints "Logging out...", waits one second and calls `auth.logout()`.
6. Prints a thank-you message.

Colors in the terminal are made with ANSI escape codes: blue for headers, green for success, red for failure and yellow for the logout step.

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=24,0,6&height=10&section=header" width="100%" alt=""/>

## Project Structure

<details open>
<summary><b>Click to expand / collapse</b></summary>

<br>

```text
SafeBankX/
├── .vscode/          # Editor settings
├── assets/           # Project assets
├── docs/             # Documentation
├── include/          # Header files (security.h with AuthManager)
├── src/              # Source files
├── main.cpp          # Entry point: login demo
└── SafeBankX.exe     # Prebuilt Windows executable
```

</details>

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=30,6,12&height=10&section=header" width="100%" alt=""/>

## Build and Run

<details open>
<summary><b>Windows</b></summary>

<br>

```bat
g++ -std=c++17 main.cpp src/*.cpp -o SafeBankX.exe
SafeBankX.exe
```

</details>

<details open>
<summary><b>Linux</b></summary>

<br>

```bash
g++ -std=c++17 -pthread main.cpp src/*.cpp -o SafeBankX
./SafeBankX
```

</details>

A C++17 compiler such as g++ is needed. The program uses `std::thread` and `std::chrono` for the short delays.

<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&customColorList=0,6,12&height=10&section=header" width="100%" alt=""/>

## Credits

- Developed By: Shani 
- Developed under the valuable guidance of Mr. Manish Jain

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,12,18,24,30&height=150&section=footer" width="100%" alt="footer"/>

</div>
