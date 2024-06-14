# Terminator Config

## Install terminator - themes

- Creación de la carpeta plugins en config de Terminator

	```bash
	mkdir -p ~/.config/terminator/plugins
	```

- Si la version de Terminator es >= 1.9
	```bash
	 wget https://git.io/v5Zww -O $HOME"/.config/terminator/plugins/terminator-themes.py"
	```

- Para activar el pluging:


	`terminator > preferences > plugins` tendremos que activar la casilla de `Terminator Themes`.

> [!WARNING]
> Es importante hacer logout de la sesión para aplicar los cambios.


Abre el terminal, click derecho y tendras la opcion de `Themes` y podrás previsualizar antes de instalar.

> [!TIP]
> Si por defecto no se abre con el tema escogido puedes hacer un script que lo abra desde la terminal por defecto. Hasta que encuentrela solución'.


```bash
vim ~/start_terminator.sh
```
Lo que va entre comillas doble se tiene que poner el nombre del tema que elegiste;

```vim
#!/bin/bash
terminator -p "1984 Dark"
```


```bash
chmod +x ~/start_terminator.sh
```


```bash
echo 'alias yow="(terminator -p \"1984 Dark\" &); disown; exit"' >> ~/.zshrc
source ~/.zshrc
```
Desde la terminal de ubuntu lo llamas para que se abra Terminator con el tema que queremos.

```bash
yow
```
> [!NOTE]
> Para mas información visita [EliverLara](https://github.com/EliverLara/terminator-themes/tree/master).

- - -

## Comandos Básicos de Terminator

```bash
Ctrl + Shift + o | Nueva sub-terminal horizontal.
Ctrl + Shift + e | Nueva sub-terminal vertical.
Ctrl + Shift + w | Cerrar la actual sub-terminal o la terminal si no hay.
Ctrl + Shift + p | Ir a la sub-terminal previa.
Ctrl + Shift + n | Ir a la sub-terminal siguiente.
Ctrl + Shift + ᐃ | Incrementa/decrementa el tamaño vertical de la sub-terminal.
Ctrl + Shift + ᐁ | Incrementa/decrementa el tamaño vertical de la sub-terminal.
Ctrl + Shift + ᐅ | Incrementa/decrementa el tamaño horizontal de la sub-terminal.
Ctrl + Shift + ᐊ | Incrementa/decrementa el tamaño horizontal de la sub-terminal.
Ctrl + Shift + f | Permite buscar texto en la sub-terminal actual.
Ctrl + Shift + g | Resetea y limpia la sub-terminal actual.
         Alt + a | Se puede teclear en todas las sub-terminales.
         Alt + o | Se puede teclear sólo en la sub-terminal actual.
         Alt + ᐃ | Mueve el control a la sub-terminal de arriba.
         Alt + ᐁ | Mueve el control a la sub-terminal de abajo.
         Alt + ᐅ | Mueve el control a la sub-terminal de la derecha.
         Alt + ᐊ | Mueve el control a la sub-terminal de la izquierda.
        Ctrl + + | Incrementa el tamaño del texto.
        Ctrl + - | Decrementa el tamaño del texto.
        Ctrl + 0 | Regresa el tamaño del texto al original.
```
