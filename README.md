
## TODO  

1. 实现汇编器，将riscv rv32i 汇编转成二进制  

2. 基于真实riscv程序dump出的机器码  


Notes: 
- bus上地址来模拟，mem和io

### python 工具的使用

```
uv venv
uv pip install -r tools/requirements.txt
uv run tools/assem.py tests/test1.asm tests/test1.bin
```


## 说明

参考：
https://fmash16.github.io/content/posts/riscv-emulator-in-c.html  
https://github.com/fmash16/riscv_emulator/tree/main 

泰晓科技复刻版：  
https://tinylab.org/tinyemu-introduction/  