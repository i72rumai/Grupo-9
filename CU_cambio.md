**Cambio lider**
---

ID: 3

*Actores principales:* usuario

*Actores secundarios:* equipo, alumno

**Precondiciones:**

* Debe existir un equipo

**Flujo principal:**

1. El caso de uso comienza cuando se desea cambiar o asignar el lider de uno de los grupos.
2. Se comprueba si este equipo tenía ya un lider.
3. En caso afirmativo se elije cual de los otros componentes del equipo será
   el lider y en caso de no haberlo se asignará uno.

**Postcondiciones:**

* El sistema mostrará una confirmación del cambio de lider.

**Flujos alternativos:**

* Si el equipo elegido no existe o el alumno asignado como lider no está en la
  base de datos el programa mostrará por pantalla un mensaje de error.
