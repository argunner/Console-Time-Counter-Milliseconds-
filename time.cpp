#include <QTextStream>
#include <QTime>
#include <QProcess>
#include <unistd.h>


QString get_time(){

	QTime qtime = QTime::currentTime();
	QString stime = qtime.toString("hh:mm:ss.zzz");
	return stime;
}

int main(){

	QTextStream out(stdout);
	QString buffer = get_time();

	while(1){

	 if( get_time() != buffer){

		buffer = get_time();
//		QProcess::execute("clear");
//		write(1,"\E[H\E[2J",7);
		out << get_time() <<endl;
	 }
	
	}
	
}
