
CREATE TABLE tbUczniowie (
    id INTEGER NOT NULL PRIMARY KEY AUTO_INCREMENT,
    imie TEXT,
    nazwisko TEXT,
    plec INTEGER,
    data_ur DATE,
    awatar BLOB,
    egzamin INTEGER,
    srednia_ocen DECIMAL,
    uwagi TEXT
);

CREATE TABLE tbOddzialy (
    id_oddzialu INTEGER NOT NULL PRIMARY KEY AUTO_INCREMENT,
    oznaczenie TEXT,
    rok_naboru TEXT,
    rok_matury TEXT
    
)
