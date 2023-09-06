//外側のループがスタート地点の場所
    loop(i,1,n){
        //空のデックにスタート地点を初期値として入れる
        dfs.push_back(i);
        //dfsが空になるまで(全ての探索を終えるまで)繰り返す
        while(!dfs.empty()){
            //現在入っている辿り方から、最も小さい要素に飛び続けて、もう行ける場所がなくなるまで行く
            while(1){
                //次の場所の候補の中で最も小さいものを探す
                int min=n+1;
                loop(j,0,m){
                    //繋がってる要素を発見した時
                    if(a[j]==dfs.back()||b[j]==dfs.back()){
                        //次の場所の候補を取得
                        int target=(a[j]==dfs.back())?b[j]:a[j];
                        //次の場所の候補が既に通った場所か検証しする
                        if(find(dfs.begin(), dfs.end(), target)==dfs.end()){
                            //現状の最有力候補よりも値が小さいなら値の更新、距離の更新
                            if(min>target){
                                len=c[j];
                                min=target;
                            }
                        }
                    }
                }
                //追加する値は、前回削除した値がある場合、それより大きくなければならない。
                //もし値を追加出来る場所があるなら値を追加、出来ないなら値の追加をやめる。
                if(min!=n+1&&lastDel<min){
                    //値を追加する時に、合わせて距離を計算
                    dfs.push_back(min);
                    sumLen+=len;
                }
                else {
                    break;
                }
            }
            //最大値なら更新
            if(sumLen>maxLen)maxLen=sumLen;

            //値を保管してから削除
            lastDel=dfs.back();
            dfs.pop_back();
            sumLen-=len;
        }
    }
