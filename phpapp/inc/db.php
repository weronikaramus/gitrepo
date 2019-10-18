<?php
function init_baza() {
	global $db, $ddbfile;
	if (!file_exists(DBASE.$dbfile)) {
		$kom[] = 'Brak pliku bazy. Tworzę nowy.';
		$db = new PDO("sqlite:DBASE.$dbfile");
	}
		$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXEPTION);
}
;
?>