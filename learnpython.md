
# Pythonが苦手です。どうやってべんきょうしたらいいですか。
なぜPythonが苦手と感じるかと自己反省してみると、この収拾のなさというかいい加減さが覚えにくい。  
なんらかの思想で統一されているとそれを頼りに記憶のわくぐみをつくるのだが、とかなんとか言う前に勉強しよう。  

というので立ち上げたJupyter notebookですのであまり期待しないで進みましょう。

文字列がわかりません。  
質問  charはあるのですか。見つからないのでないのではないか。
まあいいいか。  


変数は事前に定義するのかどうか。突然`x=3`とか使っていいの。  
やってみてください。 べつにいいみたいです。  
`3 + "5"`とかしたらさすがエラーになりました。

### 質問フラグと問題フラグについて。  
あとで質問で検索したり、問題で復習したりするために、適宜質問と問題という表題を立てますが読むときはあまりきにしないでよい。

問題
色のリストについて文字数のリストを作る。append()を使う。


```python
colors = ["yellow", "red", "green", "blue", "purple"]
colorlength = []
for color in colors :
    colorlength.append(len(color))
print (colorlength)
```

質問 連想配列（dict、hash）はどうやって作るのですか。  
質問 リストからzipで簡単に作れますか。例えばzip(colors, colorlength)とか。  
質問 いちいちprintした方がいいですか。それとも変数を素でうちこむのがいいですか。  

`zip()`という関数があった。  
思っていたのとはだいぶ違うが例を転記してみる。実験。うむ、これは便利かも。


```python
days = ['Monday', 'Tuesday', 'Wednesday']
fruits = ['banana', 'orange', 'peach']
desserts = ['tiramisu', 'ice cream', 'pie', 'pudding']
drinks = ['coffee', 'tea', 'beer']
for day, fruit, drink, dessert in zip(days, fruits, drinks, desserts):
    print(day, ": drink", drink, "- eat", fruit, "- enjoy", dessert)
```


```python
english = 'Monday', 'Tuesday', 'Wednesday'
french = 'Lundi', 'Mardi', 'Mercredi'
dict( zip(english, french))
```


```python
list(zip(english,french))
```

`list()`とか`dict()`とか変な関数ですね。

`range()`を`list()`で囲むと数列ができる。  
おー、これは便利。


```python
list(range(10, -1, -1))
```

さて、それ以前にPython dictionaryがわからないのでテキストを読む。

`{}`で作成する。


```python
bierce = {
        "day": "A period of twenty-four hours, mostly misspent",
        "positive": "Mistaken at the top of one's voice",
        "misfortune": "The kind of fortune that never misses",
        }
bierce["day"]
```

問題
色のリストについて色名をキーに文字数をvalueにした辞書を作る。できた。


```python
colors = ["yellow", "red", "green", "blue", "purple"]
colorlength = []
for color in colors :
    colorlength.append(len(color))

dict(zip(colors,colorlength))
```




    {'blue': 4, 'green': 5, 'purple': 6, 'red': 3, 'yellow': 6}


