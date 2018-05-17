# coding:utf-8  
import re
string = 'ADSDavb测试123<>《》！SADFKD;你好 <python>*(^)$%~!@#$…&%￥—+=、/。，；\‘’- -“”--。。.：,,,{}【】_·`文本'
filtrate = re.compile(u'[^\u4E00-\u9FA5a-zA-Z,\\\\.-\\/<.*>]') #\\\\是匹配\   \\/是匹配/  <.*>是匹配<>  a-zA-Z是匹配英文大小写的 \u4E00-\u9FA5是匹配中文的
filtered_str = filtrate.sub(r'<unk> ', string)#其余字符用<unk>代替
print (filtered_str)





o # Applets
