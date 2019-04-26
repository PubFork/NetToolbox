﻿#ifndef __INTERNATIONAL_HPP__
#define __INTERNATIONAL_HPP__

#include <vector>
#include <map>
#include <Windows.h>
#include <tchar.h>

#include "../DuiLib/3rd/FawLib/FawLib.hpp"

class International {
public:
	static faw::string_view_t translate (faw::string_view_t _src) {
		static LCID _lcid = ::GetSystemDefaultLCID ();
		static std::map<faw::string_view_t, std::vector<faw::string_view_t>> _datum = {
			{ _T ("main.xml"),										{ _T ("main_cn.xml") } },
			{ _T ("cur_findcolor.xml"),								{ _T ("cur_findcolor_cn.xml") } },
			{ _T ("scr2gif.xml"),									{ _T ("scr2gif_cn.xml") } },
			{ _T ("menu_localnet.xml"),								{ _T ("menu_localnet_cn.xml") } },
			{ _T ("Info"),											{ _T ("提示") } },
			{ _T ("Date"),											{ _T ("日期") } },
			{ _T ("Time"),											{ _T ("时间") } },
			{ _T ("Error"),											{ _T ("错误") } },
			{ _T ("Phone"),											{ _T ("手机") } },
			{ _T ("Money"),											{ _T ("金额") } },
			{ _T ("Create"),										{ _T ("新建") } },
			{ _T ("Delete"),										{ _T ("删除") } },
			{ _T ("Domain"),										{ _T ("域名") } },
			{ _T ("Enabled"),										{ _T ("已启用") } },
			{ _T ("Disabled"),										{ _T ("已禁用") } },
			{ _T ("E-mail"),										{ _T ("电子邮箱") } },
			{ _T ("ID No."),										{ _T ("身份证号") } },
			{ _T ("Postcode"),										{ _T ("邮编") } },
			{ _T ("Error %d: "),									{ _T ("错误 %d：") } },
			{ _T ("Process ID"),									{ _T ("进程PID") } },
			{ _T ("GIF Record"),									{ _T ("GIF录制") } },
			{ _T ("Local Addr"),									{ _T ("本地地址") } },
			{ _T ("Local Port"),									{ _T ("本地端口") } },
			{ _T ("Remote Addr"),									{ _T ("远程地址") } },
			{ _T ("Remote Port"),									{ _T ("远程端口") } },
			{ _T ("Analyzing..."),									{ _T ("正在分析。。。") } },
			{ _T ("Format Group"),									{ _T ("格式类") } },
			{ _T ("Process Name"),									{ _T ("进程名称") } },
			{ _T ("TCP Connected"),									{ _T ("TCP已连接") } },
			{ _T ("TCP Listening"),									{ _T ("TCP正在监听") } },
			{ _T ("Network Group"),									{ _T ("网络类") } },
			{ _T ("File not found"),								{ _T ("未找到文件") } },
			{ _T ("Unknown Error."),								{ _T ("未知错误。") } },
			{ _T ("Color extraction"),								{ _T ("颜色萃取") } },
			{ _T ("Tracert Complete."),								{ _T ("路由跟踪完成。") } },
			{ _T ("(Decoding failure)"),							{ _T ("(解码失败)") } },
			{ _T ("Execution complete."),							{ _T ("执行完毕。") } },
			{ _T ("Routing trace to %s"),							{ _T ("正在路由跟踪到 %s") } },
			{ _T ("\nImport Function:\n"),							{ _T ("\n导入函数：\n") } },
			{ _T ("Total %s / Available %s"),						{ _T ("总共 %s / 可用 %s") } },
			{ _T ("File analysis completed."),						{ _T ("文件分析完毕。") } },
			{ _T ("Create Process Failed, %s"),						{ _T ("创建进程失败，%s") } },
			{ _T ("Unknown IP or domain name"),						{ _T ("未知地址或域名") } },
			{ _T ("Chinese Character(GB18030)"),					{ _T ("汉字(GB18030)") } },
			{ _T ("GIF Image exported failure!"),					{ _T ("GIF图导出失败！") } },
			{ _T ("Process could not terminate!"),					{ _T ("进程无法结束！") } },
			{ _T ("Folder types are not accepted"),					{ _T ("不接受文件夹类型") } },
			{ _T ("GIF Image exported successfully!"),				{ _T ("GIF图导出成功！") } },
			{ _T ("\n\n\nPE Info：\nExport Function:\n"),			{ _T ("\n\n\nPE信息：\n导出函数：\n") } },
			{ _T ("File not found, cannot be analyzed."),			{ _T ("未找到文件，无法分析。") } },
			{ _T ("The number of threads must be >= 1."),			{ _T ("线程数至少为1。") } },
			{ _T ("The number of threads must be <= 100."),			{ _T ("线程数至多为100。") } },
			{ _T ("\n\n\nFile non-pe file, no PE data.\n"),			{ _T ("\n\n\n文件非PE文件，无PE数据。\n") } },
			{ _T ("Sended %-6d，Succeed %-6d，Failed %d\n"),			{ _T ("发送 %-6d，成功 %-6d，失败 %d\n") } },
			{ _T ("RSA Public/private key exported failed!"),		{ _T ("RSA公私钥导出失败！") } },
			{ _T ("Start IP cannot be greater than stop IP!"),		{ _T ("起始IP不能大于中止IP！") } },
			{ _T ("Request initiation failed: Unknown error."),		{ _T ("请求发起失败：未知错误。") } },
			{ _T ("RSA Public/private key exported successfully!"),	{ _T ("RSA公私钥导出成功！") } },
			{ _T ("The serial port has been closed: <c #7f0000>%s</c>"), { _T ("已关闭串口：<c #7f0000>%s</c>") } },
			{ _T ("The serial port has been opened: <c #00007f>%s</c>"), { _T ("已打开串口：<c #00007f>%s</c>") } },
			{ _T ("File path: %s\nFile size: %ld byte (%s) \nFile Hash: \n"), { _T ("文件路径： %s\n文件大小： %ld 字节（%s）\n文件Hash：\n") } },
			{ _T ("This function does not support very large range IP scan!"), { _T ("此功能不支持超大范围IP扫描！") } },
			{ _T ("Are you sure you want to terminate the process %s (pid:%d)?"), { _T ("确定要结束进程 %s (pid:%d) 吗？") } },
			{ _T ("The following file already exists. Do you want to overwrite it?"), { _T ("以下文件已存在，是否覆盖？") } },
			{ _T ("The serial port has been actively disconnected: <c #7f0000>%s</c>"),	{ _T ("串口已主动断开：<c #7f0000>%s</c>") } },
			{ _T ("Content is too long, the generation of two-dimensional code failed"), { _T ("内容过长，生成二维码失败") } },
			{ _T ("Failed to open a serial port: no available serial port was selected"), { _T ("打开串口失败：未选择可用的串口") } },
			{ _T ("The following file already exists. Do you want to overwrite it?\n%s"), { _T ("以下文件已存在，是否覆盖？\n%s") } },
			{ _T ("Routing trace has ended and the maximum traceable hop count has been exceeded."), { _T ("路由跟踪结束，已超过可跟踪的最大跃点数。") } },
			{ _T ("Insufficient permissions. Do you want to reopen the program with administrator permissions?"), { _T ("权限不足，是否以管理员权限重新打开程序？") } },
		};
		if (_lcid == 0x804)
			return _datum[_src][0];
		return _src;
	}
#ifdef _UNICODE
	static std::string translate (std::string_view _src) {
		faw::String _str = _src;
		_str = translate (_str.str_view ());
		return _str.stra ();
	}
#else
	static std::wstring_view translate (std::wstring_view _src) {
		faw::String _str = _src;
		_str = translate (_str.str_view ());
		return _str.strw ();
	}
#endif
};

#endif //__INTERNATIONAL_HPP__
