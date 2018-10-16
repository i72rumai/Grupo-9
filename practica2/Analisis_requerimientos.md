**IDENTIFICACIÓN DEL PROBLEMA**
---
Gestionar la información correspondiente de alumnos de una clase.


**REQUERIMIENTOS DE INFORMACIÓN**
---
Una clase de alumnos tiene la necesidad de contar con una Base de Datos que
permita llevar un mejor control sobre la información de los alumnos en la clase
y por consiguiente un mejor análisis de los mismos.

Para crear la base de datos vamos a recopilar cierta información de cada alumno
y luego vamos a crear ciertas funciones para controlar la información.

Los datos a tomar son:
- *DNI:* Identificación única de cada alumno, constará de 8 dígitos y una letra al
final, será usado a la hora de buscar un alumno.
- *NOMBRE:* El nombre de cada alumno.
- *APELLIDOS:* Se almacenarán los apellidos del alumno, será usado a la hora de
buscar un alumno.
- *TELEFONO:* Este dato no será obligatorio tomarlo, se almacenará un número de
teléfono correspondiente al contacto del alumno.
- *EMAIL CORPORATIVO:* Se le asignará a cada alumno un correo, este se formará
con la estructura "i72 + (Dos primeras letras del primer apellido) + (Dos
primeras letras del segundo apellido) + (Inicial del nombre) + @uco.es".
- *DIRECCION POSTAL:* Se guardará la dirección del domicilio del alumno.
- *ULTIMA MATRICULA:* Se guardará el último curso del cual el alumno está
matriculado, si el alumno esta matriculado aunque solo sea de una asignatura de
segundo y el resto de primero, el dato de última matrícula será el segundo curso.
- *FECHA DE NACIMIENTO:* Se registrará el dia, mes y año de nacimiento del alumno,
siguiendo la estructura día/mes/año, por ejemplo, 27/11/1999.
- *EQUIPO EN EL QUE PARTICIPA:* Se agruparán los alumnos por grupos de 5, a cada
grupo se le asignará un número y cada alumno tendrá ese número como identificador,
este dato se usará a la hora de mostrar los alumnos por orden de grupo.
- *LIDER:* Será un dato que comprobará si el alumno que se esta mostrando es el
líder o no de su propio equipo, si el alumno es líder, a la hora de mostrar el
grupo su nombre aparecerá en negrita.
