***Modificar alumno***
---
*Apellidos:* López Jiménez

*DNI:* 31025106V


*Actores principales:* usuario

*Actores secundarios:* alumno

**Precondiciones:**
- El alumno debe existir en la base de datos.

**Flujo principal:**
1. El caso de uso empieza cuando el sistema necesita modificar un alumno.
2. Se deberan introducir todos los datos nuevos una vez encontrado el alumno.

**Postcondiciones:**
- El sistema muestra al alumno y pide todos sus datos por pantalla.

**Flujos alternativos:**
- 2a: Si al introducir los apellidos del alumno se encuentran coincidencias, el
      el programa pedirá el DNI.
- 2b: Si al introducir DNI el alumno no se encuentra en la base de datos, se
      mostrará un mensaje de error.
