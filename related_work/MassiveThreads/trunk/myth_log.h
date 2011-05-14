#ifndef MYTH_LOG_H_
#define MYTH_LOG_H_

typedef enum
{
	MYTH_LOG_USER=0,//ここから先でユーザープログラムを実行した
	MYTH_LOG_INT,//ライブラリ内で何かやっている
	MYTH_LOG_WS,//ワークスチールを行なっている
	MYTH_LOG_QUIT,//終了
}myth_log_type_t;

static const char s_log_type_to_name[]=
{
		'U','I','W','Q',
};

//ログをとるための構造体
typedef struct myth_log_entry
{
	uint64_t tsc;//rdtscで得られるタイムスタンプカウンタ
	int ws_victim;
	myth_log_type_t type;//種類
}myth_log_entry,*myth_log_entry_t;

typedef struct myth_textlog_entry
{
	uint64_t ts,te;
	int cat;
	int id_a,id_b;
}myth_textlog_entry,*myth_textlog_entry_t;

#endif /* MYTH_LOG_H_ */
