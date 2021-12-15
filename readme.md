### Just for C Study.
There is a list for demo projects and show what they do:

- **Demo01**
    - demo01 回文[数]
    - demo02 判别字符串 
    - demo03 产品分配问题
    
    - demo11 斐波那契数列
    - demo12 回文[字符串]
    - demo13 冒泡排序☆
    
- **Main**
    - testNode1214_1/2 指针测试-地址详细
    - test121501 指针测试-数值交换
    ```c
    //测试指针传值
    void test121501() {
        int n1 = 1, n2, *p = &n2, *q = &n1;
  
        printf("n1地址为%p,p数值为%d.\n", &n1, n1);
        printf("n2地址为%p,q数值为%d.\n", &n2, n2);
        printf("&p,[p]地址为%p,%p,p数值为%d.\n", &p, p, *p);
        printf("&q,[q]地址为%p,%p,q数值为%d.\n", &q, q, *q);
        printf("\n");
  
        *p = *q;
  
        printf("n1地址为%p,p数值为%d.\n", &n1, n1);
        printf("n2地址为%p,q数值为%d.\n", &n2, n2);
        printf("&p,[p]地址为%p,%p,p数值为%d.\n", &p, p, *p);
        printf("&q,[q]地址为%p,%p,q数值为%d.\n", &q, q, *q);
    }
    ```
    ```text
    初始化
  
    n1地址为000000000061FDEC,p数值为1.
    n2地址为000000000061FDE8,q数值为0.
    &p,[p]地址为000000000061FDE0,000000000061FDE8,p数值为0.
    &q,[q]地址为000000000061FDD8,000000000061FDEC,q数值为1.
  
    交换后
  
    n1地址为000000000061FDEC,p数值为1.
    n2地址为000000000061FDE8,q数值为1.
    &p,[p]地址为000000000061FDE0,000000000061FDE8,p数值为1.
    &q,[q]地址为000000000061FDD8,000000000061FDEC,q数值为1.
    ```
    
    
    
  

developing...