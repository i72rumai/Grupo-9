**PRUEBAS DE SOFTWARE**
---

Se lleva a cabo un plan de pruebas, donde se evalua la fiabilidad y funcionalidad.
Entre las distintas pruebas se encuentra:
---
- *PRUEBAS DE UNIDAD:* Se han evaluado las distintas funciones que van a
      constituir la base de datos de los alumnos, para ello estas se realizan en
      todos los casos posibles probando asi su correcto funcionamineto.

- *PRUEBAS DE INTEGRACIÓN:* En este tipo de prueba se evalua tambien la
      actividad de las funciones pero esta vez como conjunto, permitiendo asi
      ver que todos los componentes del software se integran correctamente.

- *PRUEBAS DE ACEPTACIÓN:* Esta prueba se realiza de cara al usuario, verificandose
      otra vez del software, pero siendo evaluado por un usuario que debe definir
      su aceptación.
---
Las distintas pruebas se van a llevar a cabo en los distintos formularios que
componen el software, los cuales son:

- *Buscar_alumnos:* Se busca el alumno por su apellido y su dni, si coinciden
                    los apellidos se pedirá el dni y se mostrara el alumno y sus respectivos datos.

- *Modificar_alumnos:* Esta función realiza una llamada a Buscar_alumnos,si existe, se modificaran sus datos.

- *Borrado_alumnos:* Esta función hace una llamada a Buscar_alumnos, si el alumno introducido por DNI se encuentra
                     en la base de datos se eliminará.

- *Insertar_alumno:* Esta función hace una llamada a Buscar_alumnos, si el buscado no existe se pedirán el resto de
                     datos para introducirlo en la base de datos.

- *Cambio_lider:* Función para el cambio de lider en el equipo deseado, la funcion comprobará antes si existe el alumno
                  mediante una llamada a Buscar_alumnos, si existe se comprobará si tiene grupo y posteriormente se solicitará
                  el cambio de lider.

- *Borrado_completo:* Permite el borrado de la base de datos completa.

- *Copia_seguridad:* Pasar todos los archivos de la base a un archivo binario.

- *Mostar_todos:* Muestra los alunnos ordenados según, alfabeticamente, curso
                  mas alto matriculado y DNI, de forma tanto ascendente como descendnte.
