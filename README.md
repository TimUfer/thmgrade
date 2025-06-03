# 🎓 Notenrechner

Ein einfacher C++-Kommandozeilenrechner zur Berechnung des gewichteten Notendurchschnitts aus einer Datei mit Modulnoten. Unterstützt reguläre und halbgewichtete Module.

---

## 🔧 Kompilierung

Stelle sicher, dass du einen C++20-kompatiblen Compiler (z. B. `g++`) installiert hast.

```bash
g++ -std=c++20 -Wall -o modulrechner main.cpp
```
### 🚀 Ausführung
```bash
./modulrechner pfad/zur/datei.txt
```
```bash
./modulrechner
# → Du wirst aufgefordert, den Pfad einzugeben
```
## 📄 Dateiformat
So sollte die Text Datei aussehen, die du dem Modulrechner gibst
Name, Note(in Prozentpunkten ohne % zeichen), Crp, halbgewichtet(y/n)

```bash
Betriebssysteme 85 6 n
BWL 72 3 y
OOP 90 6 y
```
