# LazyVim tinkering, fucking frustrated:)

**30/06**: - This is the first time I installed LazyVim & do something with this shit. I thought it's easy but I was wrong:)
**01/07**: Config C/C++ toolkit (treesitter, formatting, lsp) & other shortcuts to get used

# Knowledge

- Lazy: a plugin manager lazy.nvim
  - :Lazy = opens the UI, I can see installed plugins, updates, etc
  - sync = scans through lua/plugins folder to sync my plugins (install new / update old plugins / etc)

- C/C++ toolkit:
  - treesitter (treesitter.lua): a parser generator tool & an incremental parsing library => syntax tree (syntax highlighting)
  - formatting (formatting.lua): configure formatters for c/cpp (clang-format), js/ts (prettier), etc
  - clangd: a LSP for c/cpp, used for syntax errors, code completion, etc
  - autocmds.lua: config tab width (when clicking Tab) = 4 for c/cpp files
  - .clang-format: a specific format configuration file for c/cpp per project

# LazyVim Cheat Sheet

## 🔍 Search / Find

### Global

- **space** = find files
- **/** = search text across project

### Go to line

- **:{line-number}** = go to this line number
- **:+{line-number}** = go down
- **:-{line-number}** = go up

---

## 📄 Buffers / Tabs

- **f + n** = create a new buffer/file (not saved yet)
- **b + d** = close the current buffer/tab

- **shift+h** = move to the next open tab
- **shift+l** = move to the previous open tab

---

## 📁 File Explorer

- **ctrl+h** = move keyboard focus to file tree
- **ctrl+l** = move back to file editor

- **a** = create a folder (under a parent dir)
- **m** = rename the file (can also move it)
- **d** = delete a file/folder

- **H** = toggle hidden files on/off (LazyVim hides dotfiles by default)

---

## ✂️ Copy / Cut

### Normal mode

- **yy** = copy the current line
- **dd** = cut the current line
  - (`d` = delete & copy)

### Visual mode

- **d** = cut the selected text

---

## 🖍️ Selection

### Normal mode

- **V** = select the current line
- **ggVG** = select all text in a file
  - `gg` = move to the first line
  - `V` = enter Visual mode
  - `G` = jump to the last line (selects everything)

### Visual mode

- **b** = select the left word
- **w** = select the right word

---

## 🧭 Cursor Navigation

### Words

- **b** = move to the left word
- **w** = move to the right word

### Current line

- **0** = move to the start of the line
- **$** = move to the end of the line

### Scrolling

- **ctrl+d** = scroll down half a page
- **ctrl+u** = scroll up half a page

---

## 💻 Terminal

- **:terminal** = create a terminal tab

---

## 🌿 LazyGit

- **leader + gg** = open LazyGit
- **space** = stage a file
- **c** = commit
- **P** = push
- **p** = pull
- **q** = quit

# Tasks

- learn git operations & bash terminal in LazyVim => set remote url to my forked repo & commit this shit ✅
