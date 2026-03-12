# 🧠 Prácticas de Programación en C++

Este repositorio contiene una colección de **programas desarrollados en C++** con fines académicos.
Los ejercicios aplican conceptos fundamentales de programación como:

* Programación modular
* Uso de funciones
* Validación de entradas
* Estructuras condicionales
* Ciclos de repetición
* Simulación de juegos en consola

Cada programa está diseñado para **reforzar la lógica algorítmica y el diseño modular del código**.

---

# 📂 Contenido del Repositorio

## 1️⃣ Piedra, Papel o Tijera (Versión ASCII)

Este programa implementa el clásico juego **Piedra, Papel o Tijera** para dos jugadores en consola.

### 🎮 Jugadas

| Símbolo | Significado |
| ------- | ----------- |
| `()`    | Piedra      |
| `[]`    | Papel       |
| `8<`    | Tijera      |

### ⚙️ Funcionamiento

1. Cada jugador introduce su jugada.
2. El sistema valida que la opción sea correcta.
3. Se muestran las jugadas elegidas.
4. El programa determina el ganador según las reglas del juego.

### 🧠 Funciones utilizadas

* `esValida()` → Verifica si la jugada es válida
* `leerJugada()` → Solicita la jugada al jugador
* `mostrarJugada()` → Muestra la jugada seleccionada
* `determinarGanador()` → Determina quién gana la partida

### ▶️ Ejemplo de ejecución

```
Jugador 1 ingrese su jugada:
Piedra = ()
Papel  = []
Tijera = 8<

Jugador 2 ingrese su jugada:

Jugador 1 eligio: Piedra
Jugador 2 eligio: Tijera

Resultado: Gana Jugador 1
```

---

# 2️⃣ Mini-Cacho (Sistema de Puntuación de Dados)

Este programa simula un **sistema de puntuación para un juego de dados simplificado**.

El jugador introduce **tres dados ordenados** y el programa calcula el puntaje según ciertas combinaciones.

### 🎲 Reglas de puntuación

| Combinación                     | Puntos            |
| ------------------------------- | ----------------- |
| Trio (tres dados iguales)       | 50                |
| Escalera (números consecutivos) | 25                |
| Cualquier otra combinación      | Suma de los dados |

### ⚙️ Funcionamiento

1. El jugador ingresa la cantidad de rondas.
2. En cada ronda introduce los valores de **tres dados ordenados**.
3. El sistema calcula el puntaje.
4. Se muestra un marcador con el puntaje de la ronda y el acumulado.

### 🧠 Funciones utilizadas

* `EsTrio()` → Detecta si los tres dados son iguales
* `EsEscalera()` → Detecta números consecutivos
* `CalcularPuntaje()` → Determina el puntaje de la ronda
* `ImprimirMarcador()` → Muestra los resultados de la ronda
* `JugarPartida()` → Controla toda la partida

### ▶️ Ejemplo de ejecución

```
Bienvenido al Mini-Cacho
¿Cuantas rondas deseas jugar? 3

--- Ronda 1 ---
Ingrese los 3 dados ordenados: 2 2 2
Ronda 1 | Puntos ganados: 50 | Total acumulado: 50

--- Ronda 2 ---
Ingrese los 3 dados ordenados: 1 2 3
Ronda 2 | Puntos ganados: 25 | Total acumulado: 75
```

---

# 🛠️ Compilación y Ejecución

Para compilar los programas en C++ se puede utilizar **GCC**.

### Compilar

```
g++ nombre_archivo.cpp -o programa
```

### Ejecutar

```
./programa
```

También es posible ejecutarlo en entornos como:

* **Zinjai**
* **CodeBlocks**
* **Dev-C++**
* **Visual Studio**
* **VS Code**

---

# 💻 Conceptos Aplicados

En estos ejercicios se aplican varios conceptos fundamentales:

* Programación modular
* Diseño de funciones
* Validación de datos
* Control de flujo
* Simulación de juegos
* Lógica algorítmica

---

# 👨‍💻 Autor

**Martín Javier Yujra Maldonado**

Estudiante de informática interesado en:

* Desarrollo de software
* Programación en C++
* Algoritmos
* Desarrollo de videojuegos

---

# 📜 Licencia

Proyecto desarrollado con fines **educativos y académicos**.
# Tareas_de_laboratorio-sis457-
