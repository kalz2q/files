# files
public file repository mainy ipynb jupyter notebooks

えっと。日本語で書いたほうがいいかな。

jupyter notebookでいろいろ勉強しています。

その際、人のnotebookを見たい。  
notebookで書かれた例えばRの入門書とかないか。  
とか思うのですがなかなかなかったりするので、つくりかけでもなんかの参考になるかと思い、アップすることにしました。  

その置き場に使う予定。

### 使い方
git cloneして、そのなかから使うものを使う、というのがいいと思います。  
github上で開いて、rawにしてコピペするのも簡単かもしれない。  
全部テキストファイルです。

Jupyterはデフォルトでpythonが使えますが、他の言語はカーネルをいれなければ使えません。  
```
Haskell : ihaskell
Julia  : ijuia
JavaScript : ijavascript
Ruby : iruby
Gopher : gophernotes
```
以上については、
```
sudo add-apt-repository ppa:chronitis/jupyter
sudo apt-get update
sudo apt-get install <kernelname>
```
で一発で入ります。

C++についてはちょっと面倒なので、別ファイルに書きました。`cpp_cling_howto.txt` 参考にしてください。

