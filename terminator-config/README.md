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
