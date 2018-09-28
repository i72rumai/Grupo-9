**Ramas**
![](https://cdn-images-1.medium.com/max/1200/1*br5JNMOLPTG36gMzBELQ-g.png)
Las ramas se utilizan para desarrollar versiones del software que, una vez completadas, se agregan a la rama principal o rama master


**Comandos Ramas**

1.Ver listado de ramas:
2.git branch

Crear una rama:
#‘git branch nombre_rama‘

Cambiarnos a una rama:
#git checkout nombre_rama

Crear una rama y moverse en un solo paso
---'git checkout -b nombre_rama'

Comparar ramas:
#‘git diff nombre_rama..nombre_rama‘

Ver ramas identicas a la actual:
#‘git branch --merged‘

Renombrar ramas:
#‘git branch -m nombre_antiguo nombre_nuevo‘

Eliminar ramas:
#‘git branch -d nombre_rama‘
#‘git branch -D nombre_rama‘

Integrar ramas a la actual:
#‘git merge nombre_rama‘

Resolver conflictos (se suele hacer manualmente):
#‘git merge --abort‘

Almacenar cambios temporales:
#‘git stash save *Mensaje*‘

Listar cambios:
#‘git stash list‘

Ver contenido de un cambio temporal:
#‘git stash show -p nombre_stash‘

Eliminar un cambio temporal:
#‘git stash drop nombre_stash‘

Aplicar cambio del stash:
#‘git stash apply nombre_stash‘
#‘git stash pop nombre_stash‘
