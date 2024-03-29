感谢万神 %%%

# Neovim-configure

基于van dark的neovim配置的vim配置

用于在WSL上运行

# changes

添加了OI模板

对于WSL环境下一些插件的问题进行了解决

解决了WSL中vim无法复制粘贴到windows剪切板的问题

删除了van dark的若干知道在干什么但是感觉完全没有意义的配置

修改了van dark配置中无法在其他用户运行的配置（点名批评函数里面使用带用户名的绝对路径）

以下为万大师的README, 欢迎大家加入 dark vim 邪教

```
      /##   /##        /####    /#                     /##    /## ##
     | ## / ##        \ #_ ##  | #                    | ##   | # |_/
     \  #| ##         \ # \ ## \  #  /######  /###### | ##   | # /##/######/####
      \ ###/  /#######\ ## \ ## \ # /## __ # / #____ #|  ## / ##| #| ##_  ##_  ##
      \ #__##\_______/ \ #  \ ##| #| #######| #     \ #\  ## ## | #| ## \ ## \ ##
      \ #  \ ##        \  #  \  # #| ##     | #     | # \  ###/ | #| ## | ## | ##
      \ ##  \ ##        \ #   \  ##|  ######\_ #######   \  #/  | #| ## | ## | ##
      \__/  \__/        \_/    \__/ \______/ \_______/    \_/   |__|__/ |__/ |__/        ─────Kewth
```

Welcome to use K-Neovim.  

## Preview
![Preview Neovim](https://raw.githubusercontent.com/Kewth/K-Neovimrc/master/img/Noevim.png)

## Install
**First you're supposed know [what Neovim is](https://github.com/neovim/neovim) and [why you sholud use Neovim](https://geoff.greer.fm/2015/01/15/why-neovim-is-better-than-vim/).**  

Then Download Neovim(this is the 0.3.2 version of Neovim):  
- windows:
	[Neovim for x64](https://github.com/neovim/neovim/releases/download/nightly/nvim-win64.zip).  
	[Neovim for x32](https://github.com/neovim/neovim/releases/download/nightly/nvim-win32.zip).  
	You can use Neovim by runnig `nvim-qt.exe`.  
- Macos:
	[Neovim for Macos](https://github.com/neovim/neovim/releases/download/nightly/nvim-macos.tar.gz).  
	You can use Neovim by runnig `./nvim-osx64/bin/nvim`.  
- Linux:
	[Neovim for linux(x64)](https://github.com/neovim/neovim/releases/download/nightly/nvim.appimage).  
	You can use Neovim by runnig `chmod u+x nvim.appimage && ./nvim.appimage`.  

After that, you should clone this source code to your configuration directory.  
For example, if the operating system you use is Linux, just run:  
```
git clone git@github.com:langcaijinjiangyan/Neovim-configure.git
mv Neovim-configure ~/.config/nvim
vim
:PlugInstall
```
If the operating system you use isn't that, sorry, i cannot give you any help in this version because I use Linux only.  

Then run Neovim, input `:PlugInstall` and press enter, it will automatically download the plugin which you may required.  

If you still want to use Vim, adding `so ~/.config/nvim/init.vim` to your .vimrc is ok.

## Usage
If you are new to vim, run `:Tutor` and prees enter in neovim.  

Make sure there is such a sentence in the config.vim: `let g:k_nv_home = 'YOUR CONFIGURATION DIRECTORY'`.  

## Plugin
Run `:PlugStatus` in Neovim to learn what plugin there is.  
There are many shortcuts that start with \<Leader\>, most are for plgins.  

## Configuration
You can make some configuration easily.  

#### Leader
K-Neovim uses Space as its Leader by defalut beacuse it's easy to press.  
I suggest you not to change it, but if you really dislike it, you can edit config.vim in your configuration directory like this: `let g:k_nv_leader = '\'`(it'll use '\\' as leader)  

#### colors
K-Neovim uses [solarized]() as its color theme.  
There're two diffenert styles of color themes, the default is dark, if you want to set it to light, add such a sentence to config.vim: `let g:k_nv_light = 1`.  

## Mapping
Notes, a few default buttons have been changed:  
- `:` is mapped to `q:` so that you can edit command in vim style.  
You can press ctrl+c after that to use the command not mapped.
- `Tab` is mapped to `ctrl+w` so that you can switch windows quickly.  
And twice `Tab` to use the command not mapped.  
- In terminal mode, use `ctrl+\ ` to back to normal mode instead of `ctrl+\ + ctrl+n`.  
- `ctrl+n` is mapped to `gj` and `ctrl+p` is mapped to `gk` in normal mode.  
