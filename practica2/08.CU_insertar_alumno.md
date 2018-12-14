**Insertar alumno**
---

*Breve descripción:* Serán pedidos todos los requerimientos tanto obligatorios como opcionales
                     que se rellenan a la hora de crear un nuevo alumno en la base por el sistema,
                     creando existe a ese nuevo alumno.

*Actores principales:* usuario

*Actores secundarios:* equipo, alumno

**Precondiciones:**

* Se hace una llamada a Buscar_alumno y empieza el programa.

**Flujo principal:**

1. El caso de uso comienza cuando se desea introducir un nuevo alumno en la base de datos.
2. El programa pide los datos necesarios para crear ese alumno.
3. El nuevo alumno queda registrado enla base de datos.

**Postcondiciones:**

* Carga el menú de programa de nuevo.

**Flujos alternativos:**

2.1 Si alguno de los datos no ha sido correctamente introducido aparecera un mensaje de error.
