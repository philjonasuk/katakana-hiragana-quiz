
#pragma once
#include "consts.h"
#include "../stdafx.h"

static std::vector<Kana> katakana_list = {
    	{"k_0",0,L"ア",L"a","k",0},
	{"k_1",0,L"イ",L"i","k",1},
	{"k_2",0,L"ウ",L"u","k",2},
	{"k_3",0,L"エ",L"e","k",3},
	{"k_4",0,L"オ",L"o","k",4},
	{"k_5",1,L"カ",L"ka","k",0},
	{"k_6",1,L"キ",L"ki","k",1},
	{"k_7",1,L"ク",L"ku","k",2},
	{"k_8",1,L"ケ",L"ke","k",3},
	{"k_9",1,L"コ",L"ko","k",4},
	{"k_10",1,L"キャ",L"kya","k",5},
	{"k_11",1,L"キュ",L"kyu","k",6},
	{"k_12",1,L"キョ",L"kyo","k",7},
	{"k_13",2,L"サ",L"sa","k",0},
	{"k_14",2,L"シ",L"shi","k",1},
	{"k_15",2,L"ス",L"su","k",2},
	{"k_16",2,L"セ",L"se","k",3},
	{"k_17",2,L"ソ",L"so","k",4},
	{"k_18",2,L"シャ",L"sha","k",5},
	{"k_19",2,L"シュ",L"shu","k",6},
	{"k_20",2,L"ショ",L"sho","k",7},
	{"k_21",3,L"タ",L"ta","k",0},
	{"k_22",3,L"チ",L"chi","k",1},
	{"k_23",3,L"ツ",L"tsu","k",2},
	{"k_24",3,L"テ",L"te","k",3},
	{"k_25",3,L"ト",L"to","k",4},
	{"k_26",3,L"チャ",L"cha","k",5},
	{"k_27",3,L"チュ",L"chu","k",6},
	{"k_28",3,L"チョ",L"cho","k",7},
	{"k_29",4,L"ナ",L"na","k",0},
	{"k_30",4,L"ニ",L"ni","k",1},
	{"k_31",4,L"ヌ",L"nu","k",2},
	{"k_32",4,L"ネ",L"ne","k",3},
	{"k_33",4,L"ノ",L"no","k",4},
	{"k_34",4,L"ニャ",L"nya","k",5},
	{"k_35",4,L"ニュ",L"nyu","k",6},
	{"k_36",4,L"ニョ",L"nyo","k",7},
	{"k_37",4,L"ン",L"n","k",8},
	{"k_38",5,L"ハ",L"ha","k",0},
	{"k_39",5,L"ヒ",L"hi","k",1},
	{"k_40",5,L"フ",L"fu","k",2},
	{"k_41",5,L"ヘ",L"he","k",3},
	{"k_42",5,L"ホ",L"ho","k",4},
	{"k_43",5,L"ヒャ",L"hya","k",5},
	{"k_44",5,L"ヒュ",L"hyu","k",6},
	{"k_45",5,L"ヒョ",L"hyo","k",7},
	{"k_46",6,L"マ",L"ma","k",0},
	{"k_47",6,L"ミ",L"mi","k",1},
	{"k_48",6,L"ム",L"mu","k",2},
	{"k_49",6,L"メ",L"me","k",3},
	{"k_50",6,L"モ",L"mo","k",4},
	{"k_51",6,L"ミャ",L"mya","k",5},
	{"k_52",6,L"ミュ",L"myu","k",6},
	{"k_53",6,L"ミョ",L"myo","k",7},
	{"k_54",7,L"ヤ",L"ya","k",0},
	{"k_55",7,L"ユ",L"yu","k",1},
	{"k_56",7,L"ヨ",L"yo","k",2},
	{"k_57",8,L"ラ",L"ra","k",0},
	{"k_58",8,L"リ",L"ri","k",1},
	{"k_59",8,L"ル",L"ru","k",2},
	{"k_60",8,L"レ",L"re","k",3},
	{"k_61",8,L"ロ",L"ro","k",4},
	{"k_62",8,L"リャ",L"rya","k",5},
	{"k_63",8,L"リュ",L"ryu","k",6},
	{"k_64",8,L"リョ",L"ryo","k",7},
	{"k_65",9,L"ワ",L"wa","k",0},
	{"k_66",9,L"ヰ",L"wi","k",1},
	{"k_67",9,L"ヱ",L"we","k",2},
	{"k_68",9,L"ヲ",L"wo","k",3},
	{"k_69",10,L"ガ",L"ga","k",0},
	{"k_70",10,L"ギ",L"gi","k",1},
	{"k_71",10,L"グ",L"gu","k",2},
	{"k_72",10,L"ゲ",L"ge","k",3},
	{"k_73",10,L"ゴ",L"go","k",4},
	{"k_74",10,L"ギャ",L"gya","k",5},
	{"k_75",10,L"ギュ",L"gyu","k",6},
	{"k_76",10,L"ギョ",L"gyo","k",7},
	{"k_77",11,L"ザ",L"za","k",0},
	{"k_78",11,L"ジ",L"ji","k",1},
	{"k_79",11,L"ズ",L"zu","k",2},
	{"k_80",11,L"ゼ",L"ze","k",3},
	{"k_81",11,L"ゾ",L"zo","k",4},
	{"k_82",11,L"ジャ",L"ja","k",5},
	{"k_83",11,L"ジュ",L"ju","k",6},
	{"k_84",11,L"ジョ",L"jo","k",7},
	{"k_85",12,L"ダ",L"da","k",0},
	{"k_86",12,L"ヂ",L"ji","k",1},
	{"k_87",12,L"ヅ",L"zu","k",2},
	{"k_88",12,L"デ",L"de","k",3},
	{"k_89",12,L"ド",L"do","k",4},
	{"k_90",12,L"ヂャ",L"ja","k",5},
	{"k_91",12,L"ヂュ",L"ju","k",6},
	{"k_92",12,L"ヂョ",L"jo","k",7},
	{"k_93",13,L"バ",L"ba","k",0},
	{"k_94",13,L"ビ",L"bi","k",1},
	{"k_95",13,L"ブ",L"bu","k",2},
	{"k_96",13,L"ベ",L"be","k",3},
	{"k_97",13,L"ボ",L"bo","k",4},
	{"k_98",13,L"ビャ",L"bya","k",5},
	{"k_99",13,L"ビュ",L"byu","k",6},
	{"k_100",13,L"ビョ",L"byo","k",7},
	{"k_101",14,L"パ",L"pa","k",0},
	{"k_102",14,L"ピ",L"pi","k",1},
	{"k_103",14,L"プ",L"pu","k",2},
	{"k_104",14,L"ペ",L"pe","k",3},
	{"k_105",14,L"ポ",L"po","k",4},
	{"k_106",14,L"ピャ",L"pya","k",5},
	{"k_107",14,L"ピュ",L"pyu","k",6},
	{"k_108",14,L"ピョ",L"pyo","k",7},
};
static std::vector<Kana> hiragana_list = {
	{"h_0",0,L"あ",L"a","h",0},
	{"h_1",0,L"い",L"i","h",1},
	{"h_2",0,L"う",L"u","h",2},
	{"h_3",0,L"え",L"e","h",3},
	{"h_4",0,L"お",L"o","h",4},
	{"h_5",1,L"か",L"ka","h",0},
	{"h_6",1,L"き",L"ki","h",1},
	{"h_7",1,L"く",L"ku","h",2},
	{"h_8",1,L"け",L"ke","h",3},
	{"h_9",1,L"こ",L"ko","h",4},
	{"h_10",1,L"きゃ",L"kya","h",5},
	{"h_11",1,L"きゅ",L"kyu","h",6},
	{"h_12",1,L"きょ",L"kyo","h",7},
	{"h_13",2,L"さ",L"sa","h",0},
	{"h_14",2,L"し",L"shi","h",1},
	{"h_15",2,L"す",L"su","h",2},
	{"h_16",2,L"せ",L"se","h",3},
	{"h_17",2,L"そ",L"so","h",4},
	{"h_18",2,L"しゃ",L"sha","h",5},
	{"h_19",2,L"しゅ",L"shu","h",6},
	{"h_20",2,L"しょ",L"sho","h",7},
	{"h_21",3,L"た",L"ta","h",0},
	{"h_22",3,L"ち",L"chi","h",1},
	{"h_23",3,L"つ",L"tsu","h",2},
	{"h_24",3,L"て",L"te","h",3},
	{"h_25",3,L"と",L"to","h",4},
	{"h_26",3,L"ちゃ",L"cha","h",5},
	{"h_27",3,L"ちゅ",L"chu","h",6},
	{"h_28",3,L"ちょ",L"cho","h",7},
	{"h_29",4,L"な",L"na","h",0},
	{"h_30",4,L"に",L"ni","h",1},
	{"h_31",4,L"ぬ",L"nu","h",2},
	{"h_32",4,L"ね",L"ne","h",3},
	{"h_33",4,L"の",L"no","h",4},
	{"h_34",4,L"にゃ",L"nya","h",5},
	{"h_35",4,L"にゅ",L"nyu","h",6},
	{"h_36",4,L"にょ",L"nyo","h",7},
	{"h_37",4,L"ん",L"n","h",8},
	{"h_38",5,L"は",L"ha","h",0},
	{"h_39",5,L"ひ",L"hi","h",1},
	{"h_40",5,L"ふ",L"fu","h",2},
	{"h_41",5,L"へ",L"he","h",3},
	{"h_42",5,L"ほ",L"ho","h",4},
	{"h_43",5,L"ひゃ",L"hya","h",5},
	{"h_44",5,L"ひゅ",L"hyu","h",6},
	{"h_45",5,L"ひょ",L"hyo","h",7},
	{"h_46",6,L"ま",L"ma","h",0},
	{"h_47",6,L"み",L"mi","h",1},
	{"h_48",6,L"む",L"mu","h",2},
	{"h_49",6,L"め",L"me","h",3},
	{"h_50",6,L"も",L"mo","h",4},
	{"h_51",6,L"みゃ",L"mya","h",5},
	{"h_52",6,L"みゅ",L"myu","h",6},
	{"h_53",6,L"みょ",L"myo","h",7},
	{"h_54",7,L"や",L"ya","h",0},
	{"h_55",7,L"ゆ",L"yu","h",1},
	{"h_56",7,L"よ",L"yo","h",2},
	{"h_57",8,L"ら",L"ra","h",0},
	{"h_58",8,L"り",L"ri","h",1},
	{"h_59",8,L"る",L"ru","h",2},
	{"h_60",8,L"れ",L"re","h",3},
	{"h_61",8,L"ろ",L"ro","h",4},
	{"h_62",8,L"りゃ",L"rya","h",5},
	{"h_63",8,L"りゅ",L"ryu","h",6},
	{"h_64",8,L"りょ",L"ryo","h",7},
	{"h_65",9,L"わ",L"wa","h",0},
	{"h_66",9,L"ゐ",L"wi","h",1},
	{"h_67",9,L"ゑ",L"we","h",2},
	{"h_68",9,L"を",L"wo","h",3},
	{"h_69",10,L"が",L"ga","h",0},
	{"h_70",10,L"ぎ",L"gi","h",1},
	{"h_71",10,L"ぐ",L"gu","h",2},
	{"h_72",10,L"げ",L"ge","h",3},
	{"h_73",10,L"ご",L"go","h",4},
	{"h_74",10,L"ぎゃ",L"gya","h",5},
	{"h_75",10,L"ぎゅ",L"gyu","h",6},
	{"h_76",10,L"ぎょ",L"gyo","h",7},
	{"h_77",11,L"ざ",L"za","h",0},
	{"h_78",11,L"じ",L"ji","h",1},
	{"h_79",11,L"ず",L"zu","h",2},
	{"h_80",11,L"ぜ",L"ze","h",3},
	{"h_81",11,L"ぞ",L"zo","h",4},
	{"h_82",11,L"じゃ",L"ja","h",5},
	{"h_83",11,L"じゅ",L"ju","h",6},
	{"h_84",11,L"じょ",L"jo","h",7},
	{"h_85",12,L"だ",L"da","h",0},
	{"h_86",12,L"ぢ",L"ji","h",1},
	{"h_87",12,L"づ",L"zu","h",2},
	{"h_88",12,L"で",L"de","h",3},
	{"h_89",12,L"ど",L"do","h",4},
	{"h_90",12,L"ぢゃ",L"ja","h",5},
	{"h_91",12,L"ぢゅ",L"ju","h",6},
	{"h_92",12,L"ぢょ",L"jo","h",7},
	{"h_93",13,L"ば",L"ba","h",0},
	{"h_94",13,L"び",L"bi","h",1},
	{"h_95",13,L"ぶ",L"bu","h",2},
	{"h_96",13,L"べ",L"be","h",3},
	{"h_97",13,L"ぼ",L"bo","h",4},
	{"h_98",13,L"びゃ",L"bya","h",5},
	{"h_99",13,L"びゅ",L"byu","h",6},
	{"h_100",13,L"びょ",L"byo","h",7},
	{"h_101",14,L"ぱ",L"pa","h",0},
	{"h_102",14,L"ぴ",L"pi","h",1},
	{"h_103",14,L"ぷ",L"pu","h",2},
	{"h_104",14,L"ぺ",L"pe","h",3},
	{"h_105",14,L"ぽ",L"po","h",4},
	{"h_106",14,L"ぴゃ",L"pya","h",5},
	{"h_107",14,L"ぴゅ",L"pyu","h",6},
	{"h_108",14,L"ぴょ",L"pyo","h",7},
};
