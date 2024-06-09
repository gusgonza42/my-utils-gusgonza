" Check if autocommands are supported
if has("autocmd")
    " When opening a file, go to the last cursor position if possible
    au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
endif

" Set visual tabs
set list  " Show whitespace characters
set listchars=tab:-->  " Display tabs as '-->'

" Highlight matching parentheses
hi MatchParen cterm=bold ctermbg=none ctermfg=yellow

" Show a column at 80 characters
set cc=80  " Set color column at 80 characters
highlight ColorColumn ctermbg=92  " Set background color for color column

" Auto close brackets in insert mode
inoremap " ""<left>  " Auto close double quotes
inoremap ' ''<left>  " Auto close single quotes
inoremap ( ()<left>  " Auto close parentheses
inoremap [ []<left>  " Auto close square brackets
inoremap { {}<left>  " Auto close curly braces
inoremap {<CR> {<CR>}<ESC>O  " Auto close curly braces with newline
inoremap {;<CR> {<CR>};<ESC>O  " Auto close curly braces with semicolon and newline

" Enable syntax highlighting
syntax on

" Set file format and encoding
set fileformat=unix  " Use Unix file format
set encoding=UTF-8  " Use UTF-8 encoding

" Set tab and indentation options
set tabstop=4  " Number of spaces a tab counts for
set softtabstop=4  " Number of spaces a tab counts for while editing
set shiftwidth=4  " Number of spaces to use for autoindent
set autoindent  " Copy indent from current line when starting a new line
set smartindent  " Smart autoindenting for programming
set noexpandtab  " Use tabs instead of spaces
set smarttab  " Insert tabs on the start of a line according to shiftwidth
set nowrap  " Don't wrap lines
set list  " Show whitespace characters

" Enable mouse support
set mouse=a  " Enable mouse in all modes

" Highlight the current line
set cursorline  " Highlight the current line
"set cursorcolumn  " Highlight the current column (commented out)

" Show line numbers
set number  " Show absolute line numbers
set relativenumber  " Show relative line numbers

" Scroll settings
set scrolloff=8  " Keep 8 lines visible above and below the cursor

" Show sign column with line numbers
set signcolumn=number  " Show sign column with line numbers

" Set command-line options
set noshowmode  " Don't show the mode in the command line
set showcmd  " Show command in the bottom right

" Conceal options
set conceallevel=1  " Show concealed text minimally
set shortmess+=c  " Avoid 'pattern not found' messages

" Format options
set formatoptions-=cro  " Don't automatically continue comments when pressing Enter

" Bell and backup options
set noerrorbells  " Disable error bells
set visualbell  " Enable visual bell instead of beeping
set t_vb=  " Disable terminal visual bell
set noswapfile  " Don't use swap files
set nobackup  " Don't create backup files
set undodir=~/.vim/undodir  " Set undo directory
set undofile  " Enable persistent undo
set clipboard=unnamed  " Use the system clipboard

" Search options
set ignorecase  " Ignore case in search patterns
set smartcase  " Override ignorecase if the search pattern contains uppercase letters
set incsearch  " Show search matches as you type
set hlsearch  " Highlight search matches

" Clear search highlights with Enter
nnoremap <CR> :noh<CR><CR>:<backspace>

" Plugin setup using vim-plug
call plug#begin('~/.vim/plugged')

Plug 'morhetz/gruvbox'  " Gruvbox color scheme
Plug 'vim-airline/vim-airline'  " Vim airline status/tabline
Plug 'sheerun/vim-polyglot'  " Language pack for Vim
Plug 'tpope/vim-commentary'  " Easy commenting
Plug 'dense-analysis/ale'  " Asynchronous linting engine
Plug 'preservim/tagbar'  " Display tags in a sidebar
Plug 'tpope/vim-fugitive'  " Git integration
Plug 'wakatime/vim-wakatime'  " WakaTime integration

call plug#end()  " End plugin setup

" Color scheme and terminal colors
set termguicolors  " Enable true colors
let g:gruvbox_italic=1  " Enable italics in Gruvbox
colorscheme gruvbox  " Set color scheme to Gruvbox
set background=dark  " Set background to dark
hi Normal guibg=NONE ctermbg=NONE  " Set background color to none
let g:terminal_ansi_colors = [
    \ '#282828', '#cc241d', '#98971a', '#d79921', '#458588', '#b16286', '#689d6a', '#a89984',
    \ '#928374', '#fb4934', '#b8bb26', '#fabd2f', '#83a598', '#d3869b', '#8ec07c', '#ebdbb2',
\]

" Key mapping for Tagbar plugin
nmap <F8> :TagbarToggle<CR>

" Leader key settings
" Set leader key to backslash
" Map leader + \ to jump to the last position
" Map space to enter command mode
let mapleader = "\\"
nnoremap <leader>\ ``
nnoremap <space> :
