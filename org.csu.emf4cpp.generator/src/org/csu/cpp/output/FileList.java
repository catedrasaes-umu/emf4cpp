package org.csu.cpp.output;

import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.util.ArrayList;

import org.eclipse.xpand2.output.FileHandle;
import org.eclipse.xpand2.output.PostProcessor;

public class FileList implements PostProcessor {

	public FileList() {
		fileList = new ArrayList<Path>();
	}

	public ArrayList<Path> getFileList() {
		return fileList;
	}

	public void setFileList(ArrayList<Path> fileList) {
		this.fileList = fileList;
	}

	@Override
	public void afterClose(FileHandle arg0) {
		//nothing to do here
	}

	@Override
	public void beforeWriteAndClose(FileHandle arg0) {
		fileList.add(FileSystems.getDefault().getPath(arg0.getAbsolutePath()));
	}

	private ArrayList<Path> fileList;
}
