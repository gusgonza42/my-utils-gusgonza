# Config .vimrc

- instalar Plug

	```bash
	curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	```

- Copiar y pegar en `vim ~/.vimrc`

	```vim
	" Si está disponible el autocmd (auto comando)
	if has("autocmd")
	   " Después de leer un archivo, si la última posición de edición es mayor que la línea 1 y menor o igual a la última línea,
	   " mueve el cursor a la última posición de edición.
	   au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
	endif
	
	" Establece visualización de tabs
	set list
	set listchars=tab:-->
	
	" Configura el resaltado de paréntesis coincidentes
	hi MatchParen cterm=bold ctermbg=none ctermfg=yellow
	
	" Muestra la columna en 80 caracteres
	set cc=80
	highlight ColorColumn ctermbg=92
	
	" Mapeos para cerrar automáticamente paréntesis y otros caracteres
	inoremap " ""<left>
	inoremap ' ''<left>
	inoremap ( ()<left>
	inoremap [ []<left>
	inoremap { {}<left>
	inoremap {<CR> {<CR>}<ESC>O
	inoremap {;<CR> {<CR>};<ESC>O
	
	syntax on
	
	" Configuraciones generales
	set encoding=UTF-8
	set tabstop=4
	set softtabstop=4
	set shiftwidth=4
	set autoindent
	set smartindent
	set noexpandtab
	set smarttab
	set nowrap
	set mouse=a
	set number
	set relativenumber
	set scrolloff=8
	set signcolumn=number
	set noshowmode
	set showcmd
	set conceallevel=1
	set shortmess+=c
	set formatoptions-=cro
	set laststatus=2
	
	" Configuraciones de manejo de errores y archivos
	set noerrorbells
	set visualbell t_vb=
	set noswapfile
	set nobackup
	set undodir=~/.vim/undodir
	set undofile
	set clipboard=unnamed
	
	" Configuraciones de búsqueda
	set ignorecase
	set smartcase
	set incsearch
	set hlsearch
	nnoremap <CR> :noh<CR><CR>:<backspace>
	
	" Inicio de la configuración de plugins usando vim-plug
	call plug#begin('~/.vim/plugged')
	
	" Plugins instalados con vim-plug
	Plug 'glepnir/oceanic-material'
	Plug 'wakatime/vim-wakatime'
	Plug 'itchyny/lightline.vim'
	
	" Fin de la configuración de plugins
	call plug#end()
	
	" Configuración de colores y tema
	set termguicolors
	set background=dark
	let g:oceanic_material_background = 'darker'
	colorscheme oceanic_material
	
	" Mapeo de teclas líder y otras personalizaciones
	let mapleader = "\\"
	nnoremap <leader>\ ``
	nnoremap <space> :
	```

- Instalar los plugins una vez guardes y salgas del editor

	```bash
	vim +PlugInstall
	```

Puedes usar el comando `source ~/.vimrc` dentro del editor una abierta.

> [!TIP]
> Usa los que crees que necesitas no tiene porque ser todo el.vimrc.
