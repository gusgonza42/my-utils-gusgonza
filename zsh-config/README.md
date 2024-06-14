# Config .zshrc

Para configurar tu archivo `.zshrc` con alias y variables de entorno, puedes seguir los pasos que te doy a continuación. Esta estructura es similar a la que proporcionaste para `.vimrc`.

1. Abre tu terminal y edita el archivo `.zshrc` con el comando:

    ```bash
    vim ~/.zshrc
    ```

2. Copia y pega el siguiente contenido en tu archivo `.zshrc`:

    ```zsh
    # Alias para la configuración de Zsh
    alias zrc='vim ~/.zshrc && source ~/.zshrc'
    alias vrc='vim ~/.vimrc'
    alias ..='cd ..'
    alias ...='cd ../..'
    alias gga='git add'
    alias ggc='git commit -m'
    alias ggl='git log --oneline --decorate --graph --all | less -FRX'
    alias ggp='git push'
    alias ggb='git branch | less -FRX'
    alias ggs='git status'
    alias ggsw='git switch'
    alias ggco='git checkout'
    alias python='python3 $@'
    alias CC='gcc -Wall -Werror -Wall'
    alias gglf='git ls-files'
    alias exam='bash -c "$(curl https://grademe.fr)"'
    alias cvrc='cat ~/.vimrc'
    alias czsh='cat ~/.zshrc'
    
    # Variables de entorno
    USER='yow_user'
    export USER
    MAIL='yow_user@student.42barcel'
    export MAIL
    ```

3. Guarda y cierra el archivo `~/.zshrc` (`:wq` en Vim).

4. Para aplicar los cambios, usa el comando:

    ```bash
    source ~/.zshrc
    ```

> [!TIP]
> Puedes personalizar los alias y las variables de entorno según tus necesidades. Si hay alguna configuración adicional que quieras agregar, simplemente edítala en el archivo `.zshrc`.

Con estos pasos, tendrás una configuración básica y funcional en tu archivo `.zshrc`, similar a la estructura proporcionada para `.vimrc`.
