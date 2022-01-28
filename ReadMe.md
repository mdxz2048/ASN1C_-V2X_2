## 当前版本

- **V_1.0.0**

## 版本更新记录

### V_1.0.0

* 基本DER编码格式的encode和decode;

## 平台要求

### 硬件

- PC

### 系统

- ubuntu20.04

# 使用方法

1. 直接在`ASN1C_V2X_2`目录下执行`make`
   ```shell
   make -s
   ```
2. 运行程序
   ```bash
   ./debug/bin/V2xTest
   ```
3. 运行结果
   ```
    specify filename for BER output
   <MessageFrame>
       <msgFrameExt>
           <messageId>12</messageId>
           <value>
               <SensorSharingMsg>
                   <msgCnt>120</msgCnt>
                   <id>6D 73 67 5F 62 75 66 00</id>
                   <equipmentType><obu/></equipmentType>
                   <secMark>12345</secMark>
                   <sensorPos>
                       <lat>11600000</lat>
                       <long>2900000</long>
                   </sensorPos>
               </SensorSharingMsg>
           </value>
       </msgFrameExt>
   </MessageFrame>
   ```
