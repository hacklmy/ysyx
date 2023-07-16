# 运行npc
```bash
make verilog
make copy_top_pipeline
在相应的地方（nanos-lite）运行make run
```

宏定义在/csrc/main.cpp的40行，里面的波形在不需要调试时请关闭，否则会生成很大的波形文件
