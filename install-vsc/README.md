# Install VSC 42BCN

```bash
https://drive.google.com/file/d/1DyKHlKF7pdxewMFjnCrVsbPBSuSjX_i_/view?usp=sharing
```
- Desde la carpeta `Downloads` y se descomprime:

```bash
tar -xvzf code-stable-x64-1715058993.tar.gz
```

- ahora exportamos la ruta para usar  `code .` o `code` en cualquier directorio.

> [!NOTE]
> Recuerda cambiar `user_name` y poner el tuyo.

En caso de que uses Bash
```bash
echo 'export PATH=$PATH:/home/user_name/Downloads/VSCode-linux-x64/bin' >> ~/.bashrc && source ~/.bashrc
```
En caso de que uses Zsh
```bash
echo 'export PATH=$PATH:/home/user_name/Downloads/VSCode-linux-x64/bin' >> ~/.zshrc && source ~/.zshrc
```

> [!CAUTION]
> En caso de que descomprimas en otro directorio que no sea `Downloads`, necesitas modificar la ruta del export.


- Puedes abrir VSC en cualquier directorio

```bash
code .
```

```bash
code 
```

