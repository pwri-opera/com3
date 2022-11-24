### Common Control Message for Contruction Machinery(COM3)
- はじめに
COM3は土木研究所の自律施工技術基盤OPERAにおいて提案する建設機械の共通制御信号案です。
ここでは、提案する制御信号案に基づき作成したdbcファイルや制御信号のread/writeをするためのC++による実装例を公開します。
建設機械ごとに作成した共通制御信号案の実装例を、各ディレクトリに格納してあります。

- インストール
  - 依存ライブラリのインストール
    - [dbcpppのインストール](https://github.com/genkiiii/dbcppp)
    - [RTTRのインストール](https://github.com/rttrorg/rttr)
    - [canaryのインストール](https://github.com/djarek/canary)
  - com3ファイルのインストール
    - git clone https://github.com/pwri-opera/com3
    - cd com3
    - mkdir build && cd build
    - cmake ..
    - make install
    
