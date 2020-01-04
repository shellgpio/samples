```
git clone https://github.com/shellgpio/WiringNP
cd WiringNP
chmod 775 build
./build
```



```
gcc -Wall -o go go.c -lwiringPi -lpthread
```


forward
```
./go 15 0 16 10 4 0 5 10
```

back
```
./go 15 10 16 0 4 10 5 10
```

left
```
./go 15 0 16 01 4 0 5 0
```

right 
```
./go 15 0 16 0 4 0 5 10
```

stop
```
./go 15 0 16 0 4 0 5 0
```
