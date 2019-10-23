<?php
function init_baza() {
	global $db, $ddbfile, $kom;
	if (!file_exists(DBASE.$dbfile)) {
		$kom[] = 'Brak pliku bazy. Tworzę nowy.';
		$db = new PDO("sqlite:DBASE.$dbfile");
	}
		$db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXEPTION);
}

function init_tables() {
	global $db;
	if(file_exists(DBASE.'baza.sql')){
		$sql = file_get_contents(DBASE.'baza.sql', 'r');
		if($db->exec($sql)){
			$kom[] = "utworzono tabele!";
		}
	}
}

?>
