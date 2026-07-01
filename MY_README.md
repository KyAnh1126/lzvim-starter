# LazyVim tinkering, fucking frustrated:)

**30/06**: - This is the first time I installed LazyVim & do something with this shit. I thought it's easy but I was wrong:)

# Knowledge

- Lazy: a plugin manager lazy.nvim
  - :Lazy = opens the UI, I can see installed plugins, updates, etc
  - sync = scans through lua/plugins folder to sync my plugins (install new / update old plugins / etc)

# Common Shortcuts:

## space (leader key) combination:

- **space** = find files
- **/** = search text across project
- **f + n** = create a new buffer/file (not saved yet)
- **b + d** = close the current buffer/tab

## normal stuff:

- **ctrl+h** = move keyboard focus to file tree
- **ctrl+l** = move back to file editor
- **shift+l** = move to the prev tab in open file tab
- **shift+h** = move to the next tab in open file tab

- **b** = move to the left word
- **w** = move to the right word

- **ctrl+d** = scroll down half a page
- **ctrl+u** = scroll up half a page

## visual mode:

- **dd** = cut the current line
- **d** = cut the selected text
  (d = delete & copy)

- **b** = select the left word
- **w** = select the right word

- yy = copy the current line
- V = select the current line

## CmdLine (':' stuff):

- **:{line-number}** = go to this line number
- **:+{line-number}** = go down
- **:-{line-number}** = go up

- :terminal: create a terminal tab

## normal mode:

- **0** = move the cursor to the start of the line
- **$** = move the cursor to the end of the line
- ggVG = select all text in a file
  - gg = moves cursor to the very first line
  - V = enters Visual mode
  - G = jumps to the very last line => highlights everything in between

## file explorer:

- **ctrl+h** = move keyboard focus to file tree
- **m** = rename the file (could update its path/location also)

- **H** = toggle hidden files on/off (by default, LazyVim hides dotfiles)
- **a** = create a folder (under a parent dir)

# Tasks

- learn git operations & bash terminal in LazyVim => set remote url to my forked repo & commit this shit
