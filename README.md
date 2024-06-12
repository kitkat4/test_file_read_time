# 概要

ファイル読み込み速度を計測するプログラム

# 使用方法
## ビルド
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## ファイル生成
800kBのダミーファイルを10000個生成する。
```
$ ../gen_files.sh
```

## キャッシュクリア
```
$ ../clear_cache.sh
```

## 実行
引数は読み込むファイルの個数。
```
$ ./test_file_read_time 10000
```

